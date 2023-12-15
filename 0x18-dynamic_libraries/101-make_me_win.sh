#!/bin/bash
wget -p /tmp https://github.com/manonaSamir/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD~/tmp/libgiga.so
