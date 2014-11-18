# Makefile for CSC300 PA#1 (paint program) using OpenGL.

# Author: John M. Weiss, Ph.D.
# Written Sep 19, 2013.

# Usage:  make target1 target2 ...

#-----------------------------------------------------------------------

# GNU C/C++ compiler and linker:
LINK = g++

# Turn on optimization and warnings:
#CFLAGS = -Wall -O -g
#CXXFLAGS = $(CFLAGS)

# OpenGL libraries for Linux
#GL_LIBS = -lglut -lGLU -lGL -lm

#-----------------------------------------------------------------------

# Specific targets:

# MAKE allows the use of "wildcards", to make writing compilation instructions
# a bit easier. GNU make uses $@ for the target and $^ for the dependencies.

10Sum_of_Primes:	10Sum_of_Primes.o
	$(LINK) -o $@ $^ 

13LargeSum:	13LargeSum.o
	$(LINK) -o $@ $^ 

#-----------------------------------------------------------------------

clean:
	rm -f *.o *~ core

cleanall:
	rm -f *.o *~ core 10Sum_of_Primes 13LargeSum

