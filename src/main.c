/*************************************************************************
	> File Name: main.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Tue 29 Dec 2020 02:16:32 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <rc.h>

int main(int argc, const char *argv[]) {
    if (argc == 1) {
        fprintf(stderr, "rc: missing operand\n");
        exit(1);
    }
    for (int i = 1; i < argc; i++) {
        rc(argv[i]);
    }
    return 0;
}
