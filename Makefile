CFLAGS=-Wall -Wextra -Werror -std=c99 -pedantic -g3
CC ?= cc

.DEFAULT_GOAL := build

all:

build:
	splint -strict-lib -strict -warnmissingglobs -mods -internalglobs -globs ex && $(MAKE) --silent ex
	
bugcheck:
	valgrind -q ./ex

run:
	$(MAKE) --silent build && $(MAKE) --silent bugcheck

clean:
	# This is how you declare a `make clean` yo
	rm -f ex