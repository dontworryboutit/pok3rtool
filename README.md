# pok3rtool Vortex Keyboard Dev Tool/Library

*Disclaimer: This project comes with no warranty, and may be used for free at your own risk.*

The `pok3rtool` CLI application runs on Linux, Windows, and Mac OS X. Along with some development
tools, `pok3rtool` implements the firmware update protocol over USB for the POK3R, POK3R RGB,
Vortex Core, RACE3, ViBE, and some others.

The `pok3rtool` executable is built with CMake. You will need all submodules checked out to build it.

**WARNING: THIS TOOL CAN VERY EASILY BRICK YOUR KEYBOARD IF USED INCORRECTLY, MAKING IT
UNUSABLE WITHOUT EXPENSIVE DEVELOPMENT TOOLS. READ THE DOCUMENTATION, POSSIBLY READ THE
CODE, AND PROCEED AT YOUR OWN RISK.**

[See the wiki for pok3rtool usage, warnings, etc.](https://github.com/pok3r-custom/pok3rtool/wiki)

### Building

    git clone --recursive https://gitlab.com/pok3r-custom/pok3rtool.git
    mkdir pok3rtool-build
    cd pok3rtool-build
    cmake ../pok3rtool
    make

Ubuntu compile process

    2  apt-get update
    3  sudo apt-get install build-essential cmake openssl-dev
    4  sudo apt-get install build-essential cmake libssl-dev
    5  ll
    6  mkdir development
    7  cd development/
    8  mkdir pok3r_stuff
    9  cd pok3r_stuff/
   10  git clone --recursive https://gitlab.com/pok3r-custom/pok3rtool.git
   11  apt install git
   12  git clone --recursive https://gitlab.com/pok3r-custom/pok3rtool.git
   13  mkdir pok3rtool-build
   14  cd pok3rtool-build
   15  cmake ../pok3rtool
   16  make
   17  apt search libusb
   18  mkdir pok3rtool-build
   19  cd pok3rtool-build
   20  ll
   21  cd ../
   22  ll
   23  rm -rf pok3rtool-build/
   24  ll
   25  sudo apt install libusb-dev
   26  make
   27  lsusb 
   28  ./pok3rtool list
   29  sudo ./pok3rtool list
   30  history

