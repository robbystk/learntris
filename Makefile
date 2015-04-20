SHELL = /bin/sh

.SUFFIXES: .c .o

learntris : lt.c
	gcc lt.c -o learntris

default : learntris
