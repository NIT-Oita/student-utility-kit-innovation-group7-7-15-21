#include <stdio.h>

void saveData(int id, char name[], int attendance)
{
    FILE *fp;

    fp = fopen("attendance.txt", "a");

    if (fp == NULL) {
        printf("ファイルを開けません\n");
        return;
    }

    fprintf(fp, "%d %s %d\n", id, name, attendance);

    fclose(fp);
}

void loadData()
{
    FILE *fp;
    int id, attendance;
    char name[50];

    fp = fopen("attendance.txt", "r");

    if (fp == NULL) {
        printf("データがありません\n");
        return;
    }

    while (fscanf(fp, "%d %s %d",
                  &id, name, &attendance) == 3) {
        printf("%d %s %d\n",
               id, name, attendance);
    }

    fclose(fp);
}