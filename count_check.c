#include<stdio.h>
#include<ctype.h>
 
int check(char x){
    int n=atoi(x);
    return n;
}
int count_check(char a,char b){
    int o;
    int p;
    int q;
    o=atoi(a);
    p=atoi(b);
    q=b-a;
    if(0<=q)
        return 1;
    else if(q<0)
        return q;
   
}
int file_name_check(char c){
    int file_name=atoi(c);
    if(1000<=file_name&&file_name<10000){
        return 1;
    }else{
        return 0;
    }
}