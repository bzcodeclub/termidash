CC = g++
CFLAGS = -lncurses -I$(IDIR)

IDIR = ./lib/
SRCDIR = ./src/

SOURCES = $(SRCDIR)*.cpp

build:
	$(CC) $(SOURCES) $(CFLAGS) -o termidash
