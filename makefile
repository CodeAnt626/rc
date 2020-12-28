.PHONY:clean

all: rc.c
	gcc rc.c -o rc

clean:
	rm ./rc
