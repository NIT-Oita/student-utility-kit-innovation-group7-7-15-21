#include<stdio.h>

int main(){
    char file_name[100];
    int a,b,c,file_number;
    printf("開くファイルはありますか(1:ある 2:ない)");
    scanf_s("%d",file_number);
    if(file_number==2){
    printf("科目を選択してください(1:数学 2:国語 3:英語)");
    scanf_s("%d",a);
    if(a==1){
    printf("必要な主席日数を教えてください");
    scnaf_s("%d",b);
    }
}
}