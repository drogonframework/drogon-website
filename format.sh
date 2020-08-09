#!/usr/bin/env bash

find website_backend_drogon/controllers website_backend_drogon/models -name *.h -o -name *.cc -exec dos2unix {} \;
find website_backend_drogon/controllers website_backend_drogon/models -name *.h -o -name *.cc|xargs clang-format -i -style=file
dos2unix website_backend_drogon/main.cc
clang-format -i -style=file website_backend_drogon/main.cc
