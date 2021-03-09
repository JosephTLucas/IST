CC=gcc
MAKEFLAGS += --silent
all: intermediate
	$(CC) intermediate.c -o bin/adder.o
	@sha256sum bin/adder.o
	-rm intermediate*

intermediate.c: src/adder.c
	@sed 4i\ '\    printf("Opening Backdoor\\n");' src/adder.c >$@
clean:
	-rm bin/*
