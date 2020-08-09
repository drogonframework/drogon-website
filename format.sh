#!/usr/bin/env bash

find drogon_backend/controllers drogon_backend/models -name *.h -o -name *.cc -exec dos2unix {} \;
find drogon_backend/controllers drogon_backend/models -name *.h -o -name *.cc|xargs clang-format -i -style=file
dos2unix drogon_backend/main.cc
clang-format -i -style=file drogon_backend/main.cc
