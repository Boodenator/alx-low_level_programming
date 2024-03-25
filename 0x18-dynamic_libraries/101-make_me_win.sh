#!/bin/bash
wget -P /tmp/ https://raw.github.com./Boodenator/alx-low_level_programming/master/0x18-dynamic_libraries/mylib.so
export LD_PRELOAD=/tmp/mylib.so
