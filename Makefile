CFLAGS=-std=c99 -Wall -Wextra -Werror -Wformat -Wformat-security -pedantic -pedantic-errors -g3 -O3
CC ?= cc

.DEFAULT_GOAL := build
.PHONY: clean

all:

build:
	splint -strict-lib -checks ex && clang --analyze ./*.c && $(MAKE) --silent ex

bugcheck:
	valgrind -q ./ex

run:
	$(MAKE) --silent build && $(MAKE) --silent bugcheck

clean:
	# This is how you declare a `make clean` yo
	rm -f ex
	rm -f *.out