# Makefile for mandelbrot
# Thomas Rauhofer and Tobias Watzek
# @)>-}-;--

OBJDIR=.
OUTDIR=.
SRCDIR=.
VPATH=$(SRCDIR):$(OBJDIR)
CC=g++
CFLAGS=-g -Wall -O -std=c++11

all: directories mandelbrot

mandelbrot: mandelbrot.o asciiimage.o
	${CC} ${CFLAGS} $(OBJDIR)/mandelbrot.o $(OBJDIR)/asciiimage.o -o $(OUTDIR)/mandelbrot

mandelbrot.o: mandelbrot.cpp asciiimage.o
	${CC} ${CFLAGS} -c $(SRCDIR)/mandelbrot.cpp -o $(OBJDIR)/mandelbrot.o
asciiimage.o: asciiimage.cpp asciiimage.h
	${CC} ${CFLAGS} -c $(SRCDIR)/asciiimage.cpp -o $(OBJDIR)/asciiimage.o

.PHONY: clean
clean:
	rm -f $(OBJDIR)/*.o mandelbrot

.PHONY: directories
directories:
	mkdir -p $(OBJDIR) $(OUTDIR)
