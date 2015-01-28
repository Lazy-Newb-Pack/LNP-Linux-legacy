#!/bin/sh

# This script checks the system for ARCH and disto details
# and sets up env variables as workaround for use by the
# df/dfhack scripts.

function dlog() {
    echo -e "\033[0;32m[distro_fixes]\033[0;00m $1 $2"
}

dlog "INFO" "Checking whether any ARCH/distro specific fixes are required..."

# find df bin relative to location of this shell scrip
DF_BIN_LOCATION=$(readlink -f $(dirname "$0")/libs/Dwarf_Fortress)

if [ ! -f $DF_BIN_LOCATION ]; then
    dlog "Warning: did not find df binary at $DF_BIN_LOCATION"
fi

# Detect Stuff
OS=$(uname -s)
ARCH=$(uname -m)
VER=$(uname -r)
DF_ARCH=$(file "$DF_BIN_LOCATION" | grep -Po '(32|64)-bit')

# by default don't preload anything

# this needs to be picked up by df/dfhack and included in LD_PRELOAD
export PRELOAD_LIB

if [ -e "/usr/bin/lsb_release" ]; then
    OS=$(lsb_release -si)
    ARCH=$(uname -m | sed 's/x86_//;s/i[3-6]86/32/')
    VER=$(lsb_release -sr)
fi

# Report Stuff

dlog "INFO" "OS: $OS"
dlog "INFO" "ARCH: $ARCH"
dlog "INFO" "VER: $VER"
dlog "INFO" "DF_ARCH: $DF_ARCH"
dlog "INFO" "DF_BIN_LOCATION: $DF_BIN_LOCATION"

# Optionally, Fix stuff

# 32 bit df on 64 bit linux must give loader precedence to the 32 bit libz
# to avoid errors when libpng tries to load images.
# Some threads suggest png files should be also be converted to bmp as a fix
# I haven't found this necessary if LD_PRELOAD is properly set (on fedora).

if [ x"$DF_ARCH" == x'32-bit' ] && [ x"$ARCH" == x'64' ]; then

    # Fedora 21/64-bit is tested
    if [ x"$OS" == x'Fedora' ]; then
        export PRELOAD_LIB=/usr/lib/libz.so;
        dlog "INFO" "32 bit df on $OS/64bit detected. Will set LD_PRELOAD to $PRELOAD_LIB...."
    # Add your distro here...
    elif [ x"$OS" == x'MyFooDistro' ]; then
        export PRELOAD_LIB="abspath_to_32bit_libz";
        dlog "INFO" "32 bit df on $OS/64bit detected. Will set LD_PRELOAD to $PRELOAD_LIB...."
    else
        dlog "WARN" "32bit 'Dwarf_Fortress' on 64bit OS detected. see $0 script for fix using LD_PRELOAD."

    fi

fi

dlog "INFO" "Done"
