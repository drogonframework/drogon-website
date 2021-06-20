#!/usr/bin/env bash

clang-format --version
find backend -name *.h -o -name *.cpp -exec dos2unix {} \;
find backend -name *.h -o -name *.cpp|xargs clang-format -i -style=file
