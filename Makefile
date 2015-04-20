SHELL = /bin/sh

.SUFFIXES: .c .o

learntris : learntris.c
	gcc learntris.c -o learntris

default : learntris
