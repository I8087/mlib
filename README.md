# mlib
The goal of mlib is to create a clean and nice nonstandard C library for [MikeOS](http://mikeos.sourceforge.net/) that respects the cdecl calling convention. mlib is a C wrapper for all of the MikeOS APIs and it's completely written in assembly (nasm). Currently, the project has finally been finished but it's still maintained. **This library should only be used with programs running on MikeOS 4.6.1 and up.**

## Building
Before you get started, you'll need to have [NASM](http://www.nasm.us/) installed on your system. To build mlib, simply run the build script. If you're using Windows, run `build-win.bat`. If you're using Linux, run `build-linux.sh`. The output should be an object file, `mlib.a`, in the root directory of mlib. Use `mlib.h` in `.\include` and include `mlib.a` with your program when compiling. [SmallerC](http://www.github.com/alexfru/SmallerC) is a great compiler for MikeOS.

## Example
A small hello world program looks like this:

```c
#include "mlib.h"

int main(int argc, char *argv[]) {
    print_string("Hello, world!\r\n");
    return 0;
}

```

## Contributing
Any kind of contributing is greatly appreciated and submitting an issue or suggestion is also helpful! A list of contributers can be found [here](https://github.com/I8087/mlib/graphs/contributors).

## Licensing
This project is licensed under "Simplified BSD" and can be found in the LICENSE file.

## Dependencies
* [**NASM**](http://www.nasm.us/)
