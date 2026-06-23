#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
 
int check(char x[1024]){
    int n=atoi(x);
    return n;
};
int count_check(char a[],char b[]){
    int w=atoi(a);
    int e=atoi(b);
    int q=w-e;
    if(0<q){
        return q;
    }
    else if(q<=0){
        return -1;
    }
}

int file_name_check(char c[]){
    int file_name=atoi(c);
    if(1000<=file_name&&file_name<10000){
        return 1;
    }else{
        return 0;
    }
}