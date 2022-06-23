# heap_playground
Heap Playground and presentation material for SCSC

## GDB Script
There exists a file, .gdbinit, which if in the current working directory while launching gdb, will cause gdb to print all heap chunks and bins on each malloc, free.
Note that the GDB extension, GEF, is needed in order to use this.

## Resources
The glibc heap implementation is based on concrete algorithms which are created with bad code making it hard to understand, in order to understand what is actually going on, being able to visualize the heap as a data structure is very important. Further, for actual documentation on the glibc implementation, please refer to: [Malloc Internals](https://sourceware.org/glibc/wiki/MallocInternalsgithub).

## Pwning the heap
Pwning the heap is a very un-formal subject which should be formal, there are very specific and exact techniques as described per [Heap Techniques](https://github.com/shellphish/how2heap), that tracks techniques as they are "invented" and for each relevant libc version, depending on when new protections was introduced.

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
