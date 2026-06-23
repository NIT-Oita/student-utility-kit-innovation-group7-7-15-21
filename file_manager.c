#include <stdio.h>

int createFile(char filename[])
{
    FILE *fp;

    fp = fopen(filename, "a");

    if(fp == NULL){
        return 0;
    }

    fclose(fp);
    return 1;
}