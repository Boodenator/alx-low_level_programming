#!/bin/bash
wget -P /tmp/ https://github.com/Boodenator/alx-low_level_programming/blob/e589fa7d87ee44d1f5aedde91da7e0453e0ac9fc/0x18-dynamic_libraries/mylib.so
export LD_PRELOAD=/tmp/mylib.so
