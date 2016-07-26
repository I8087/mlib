# mlib
The goal of mlib is to create a clean and nice nonstandard C library for MikeOS that respects the cdecl calling convention. mlib is a C wrapper for all of the MikeOS APIs and it's completely written in assembly (nasm). Currently, the project is undergoing active development and the goal is for it to be finished when MikeOS 4.6 is released. **This library should only be used with programs running on MikeOS 4.6b2**

[![GitHub issues](https://img.shields.io/github/issues/I8087/mlib.svg?style=flat-square)](https://github.com/I8087/mlib/issues)
[![GitHub forks](https://img.shields.io/github/forks/I8087/mlib.svg?style=flat-square)](https://github.com/I8087/mlib/network)
[![GitHub stars](https://img.shields.io/github/stars/I8087/mlib.svg?style=flat-square)](https://github.com/I8087/mlib/stargaze)
[![GitHub license](https://img.shields.io/badge/license-BSD-blue.svg?style=flat-square)](https://raw.githubusercontent.com/I8087/mlib/master/LICENSE)

## Building
To build mlib, simply run the build script. If you're using Windows, run `build-win.bat`. If you're using Linux, run `build-linux.sh`. The output should be an object file, `mlib.a`, in the root directory of mlib.

## Contributing
Any kind of contributing is greatly appreciated. Even submitting an issue is helpful! A list of contributers can be found [here](https://github.com/jquery/jquery/graphs/contributors).

## Licensing
This project is licensed under "Simplified BSD" and can be found in the LICENSE file.

## Dependencies
* [**NASM**](http://www.nasm.us/)
* [**SmallerC Linker**](http://www.github.com/alexfru/SmallerC) (Eventually)
