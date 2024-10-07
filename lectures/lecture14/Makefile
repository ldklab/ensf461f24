.PHONY: all
all: stackexample.out memerror.out memorymap.out

%.out: %.c
	gcc -g -o $@ $<

.PHONY: clean
clean:
	rm -f *.out

