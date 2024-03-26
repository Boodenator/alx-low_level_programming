#!/bin/bash
wget -P /tmp/ https://github.com/Boodenator/alx-low_level_programming/blob/1e927acfabe5666ac18c3b3fde689005d5bccc50/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
