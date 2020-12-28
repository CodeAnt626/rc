/*************************************************************************
	> File Name: rc.c
	> Author: luowen
	> Mail: PohZero_Luo@163.com
	> Created Time: Mon 28 Dec 2020 04:39:59 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rc(const char *);
int get_rename(char *, const char *);

int main(int argc, const char *argv[]) {
    if (argc == 1) {
        fprintf(stderr, "ERROR : No argument!!!\n");
        exit(1);
    }
    for (int i = 1; i < argc; i++) {
        rc(argv[i]);
    }
    return 0;
}

int rc(const char *file_name) {
    FILE* fp = fopen(file_name, "rw");
    if (!fp) { perror("rename"); return 1; }

    char rname[1000];
    get_rename(rname, file_name);

    int rc = rename(file_name, rname);
    if (rc) { perror("rename"); return 1; }

    fclose(fp);
}

int get_rename(char *name, const char *file) {
    time_t tnow;
    tnow = time(NULL);      // 获取当前时间

    struct tm *tmnow;
    tmnow = localtime(&tnow);   // 把整数时间转换为struct tm结构体时间
    sprintf(name, "/recycle/%04u%02u%02u%02u%02u%02u-%s", tmnow->tm_year + 1900, tmnow->tm_mon + 1,
          tmnow->tm_mday, tmnow->tm_hour, tmnow->tm_min, tmnow->tm_sec, file);
}
