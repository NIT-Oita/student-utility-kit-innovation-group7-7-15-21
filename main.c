#include<stdio.h>
#include<stdlib.h>

int main(){
    char file[100];
    int subject_number,file_number,need_shusseki_count,shusseki_nisuu_count;
    char shusseki_nisuu[100],need_shusseki[100],subject[100],kokugo[100],math[100],english[100];
    printf("開くファイルはありますか(1:ある 2:ない)");
    scanf_s("%s",file,100);
    file_number==check(file);
    if(file_number==2){
    printf("科目を選択してください(1:数学 2:国語 3:英語)");
    scanf_s("%s",subject,100);
    subject_number=check(subject);
    if(subject_number==1){
    printf("必要な主席日数を教えてください");
    scnaf_s("%s",need_shusseki,100);
    need_shusseki_count==check(need_shusseki);
    printf("出席した日数を教えてください");
    scanf_s("%s",shusseki_nisuu,100);
    shusseki_nisuu_count=check(shusseki_nisuu);
    }
}
}