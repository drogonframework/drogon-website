# Drogon Website

The source code for Drogon's official website.

## Dependencies

* C++ 20 capable compiler
* [Drogon](https://github.com/drogonframework/drogon)
* [nlohmann-json](https://github.com/nlohmann/json)

## How to deploy

### Running in terminal

The backend is designed to be built by CMake like any C++ applications.

```bash
mkdir build
cd build
cmake .. # Add -DCMAKE_CXX_FLAGS="-std=c++20 -fcoroutines" if using GCC10
make -j
./drogon_website
```

It load it's configuration from `drogon_config.json` in the current directory. Which is requently replaced when building the backend itself. Please edit `drogon_config.json` in the project root to have a permanent effect. 

### Arch Linux

If you are using Arch Linux, the PKGBUILD file contains everything you need to build the backend. (NOTE: This PKGBUILD is aimed for making local builds)
Assuming your `pwd` is in the same folder as this README file is. Run

```bash
# We need to perform some stuff outside of the directory
cd .. 
mkdir trunk
# Compress the directory then put PKGBUILD and the archive in the same folder
tar --exclude='build' --exclude="content/uploads" --zstd -cf trunk/drogon-website.tar.zst drogon-website/
cp drogon-website/PKGBUILD trunk

# Build the package
cd trunk
makepkg
```

Then is should generate `drogon-website-0.0.1-x86_64.tar.zst` inside `trunk`. Just use `pacman -U` to install it and start it through systemd.

```bash
sudo pacman -U drogon-website*.pkg.tar.zst
sudo systemctl start drogon-website
```

By default the service listens on 0.0.0.0 port 4231. To change the IP address that the service is listening on. Edit `/usr/share/drogon-website/drogon_config.json` and change `address`.

```json
/*inside the configuration file*/
"listeners": [
    {
        "address": "0.0.0.0", /* <==== change this*/
        "port": 4231,
        "https": false
    }
],
```

Remeber to restart the service after changing the configuration.
