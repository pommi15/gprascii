# Makefile for mandelbrot 
# Thomas Rauhofer and Tobias Watzek
# @)>-}-;--

CC=g++
CFLAGS=-g -Wall -O -std=c++11

all: mandelbrot

mandelbrot: mandelbrot.o asciiimage.o
	${CC} ${CFLAGS} mandelbrot.o asciiimage.o -o mandelbrot
mandelbrot.o: mandelbrot.cpp asciiimage.o
	${CC} ${CFLAGS} -c mandelbrot.cpp
asciiimage.o: asciiimage.cpp asciiimage.h
	${CC} ${CFLAGS} -c asciiimage.cpp
clean:
	rm -f mandelbrot mandelbrot.o asciiimage.o
