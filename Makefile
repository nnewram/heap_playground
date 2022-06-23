SRC=$(wildcard src/*.c)
OBJS=$(notdir $(SRC:.c=))
BINS=$(addprefix bin/,$(OBJS))

.PHONY: clean all

%.h: ;

%.c: include/heaplib.h

%: src/%.c
	gcc -o bin/$@ -g -I include/ $<

all: $(OBJS)

clean:
	rm $(BINS)
