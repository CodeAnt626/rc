CC=gcc
HEADER=./include
SRC=./src
EXECUTABLE=./bin/rc

.PHONY:clean

all:${EXECUTABLE}

${EXECUTABLE}: ${SRC}/*.c
	${CC} -I${HEADER} $^ -o $@

clean:
	rm ./bin/rc
