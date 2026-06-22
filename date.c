#include <stdio.h>

void saveData(char filename[],
              int subject,
              int need,
              int attendance)
{
    FILE *fp;

    fp = fopen(filename,"a");

    if(fp == NULL){
        return;
    }

    char subjectName[20];

    switch(subject){
        case 1:
            sprintf(subjectName,"国語");
            break;

        case 2:
            sprintf(subjectName,"数学");
            break;

        case 3:
            sprintf(subjectName,"英語");
            break;

        default:
            sprintf(subjectName,"不明");
    }

    fprintf(fp,
            "%s %d %d\n",
            subjectName,
            need,
            attendance);

    fclose(fp);
}