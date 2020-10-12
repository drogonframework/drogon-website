Docs building for drogon
Python3 is needed.
commands for enviroments prepare:
python3 -m pip install sphinx

Typing `make` for help

Typing `make html` to build docs for the format of 'HTML'.

In `source/conf.py` which configure the Sphinx program,
edit the line 86 to change the html theme. Such as:
# html_theme = 'alabaster'
# html_theme = 'default'
# html_theme = 'sphinxdoc'
# html_theme = 'scrolls'
# html_theme = 'agogo'
# html_theme = 'traditional'
# html_theme = 'nature'
# html_theme = 'pyramid'
# html_theme = 'haiku'

html_theme = 'sphinx_rtd_theme'

In `source` directory,
the origin code for the Sphinx lists.



