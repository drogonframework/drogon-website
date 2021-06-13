pkgname=drogon-website
pkgver=0.0.1
pkgrel=1
arch=('aarch64' 'x86_64')
source=($pkgname.tar.zst)
backup=(usr/share/$pkgname/drogon_config.json)
sha1sums=('SKIP')
depends=(
	'drogon-git>=1.4'
)
makedepends=(
	'gcc>=11'
	'cmake>=3.5'
)

optdepends=(
	'openssl'
)

pkg_pathname=`echo $pkgname | sed 's/-/_/g'`

build() {
	cd $srcdir/$pkgname
	mkdir -p build
	cd build
	cmake -DCMAKE_INSTALL_PREFIX=${pkgdir}/usr ..

	make -j
}

package() {
	cd $srcdir/$pkgname/build
	make install
	sed -i "s|\"document_root\": \".*\"|\"document_root\": \"/usr/share/$pkgname/content\"|" ${pkgdir}/usr/share/$pkg_pathname/drogon_config.json

	# Remove upload folder that may be created during development
	if [ -d ${pkgdir}/usr/share/$pkgname/content/uploads ]; then
		rm -rf ${pkgdir}/usr/share/$pkgname/content/uploads
	fi

	cd $srcdir/$pkgname
	install -Dm644 systemd/$pkgname.service ${pkgdir}/usr/lib/systemd/system/$pkgname.service
	install -Dm644 systemd/$pkgname.conf ${pkgdir}/usr/lib/systemd/system/$pkgname.conf
}
