# heap_playground
Heap Playground and presentation material for SCSC

## GDB Script
There exists a file, .gdbinit, which if in the current working directory while launching gdb, will cause gdb to print all heap chunks and bins on each malloc, free.
Note that the GDB extension, GEF, is needed in order to use this.

## Building
```sh
make
```

## Example Usage
```sh
gdb bin/onebin

gef> c[ontinue]
gef> [repeatedly press enter]
```
