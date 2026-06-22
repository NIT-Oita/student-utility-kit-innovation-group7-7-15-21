#include<stdio.h>
#include<stdlib.h>

int main(){
    int file_a,file_b,file_c,file_number,subject_number,
    need_shusseki_count,shusseki_nissuu_count,
    check_file_number;
    char file[100],file_name[100],file_in[100],subject[100],
    shusseki_nissuu[100],need_shusseki[100],check_file[100];
    while(file_a==0||2<file_a){
    printf("ファイルを作成しますか?(1 作成する,2 作成しない:)");
    scanf_s("%s",file,100);
    file_a==check(file);
    if(file_a==0||2<file_a){
        printf("不当な入力です。やり直してください\n");
    }
    }
    if(file_a==1){
    while(file_b==0){
        printf("ファイル名を入力してください(4桁)");
        scanf_s("%s",file_name,100);
        file_b=check(file_name);
        if(file_b==0){
            printf("不当な入力です。やり直してください\n");
        }
    }
    while(file_c==0||2<file_c){
        if(file_b==1){
            //ここでファイルにデータを渡す
            printf("そのまま入力しますか?入力しないならそのまま終了します(1 入力する,2 入力しない:)");
            scanf_s("%s",file_in,100);
            file_c==check(file_in);
            if(file_c==0){
                printf("不当な入力です。やり直してください\n");
            }if(file_c==1){
                while(subject_number==0||2<subject_number){
                    printf("教科を入力してください(1 国語,2 数学,3 英語)");
                    scanf_s("%s",subject,100);
                    subject_number==check(subject);
                    if(subject_number==0||2<subject_number){
                        printf("不当な入力です。やりなおしてください");
                    }
                }if(subject_number==1){
                        while(need_shusseki_count==0||2<need_shusseki_count){
                            printf("国語の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,100);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }if(0<need_shusseki_count){
                                //fileの関数に渡す
                            }
                        while(shusseki_nissuu_count==0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,100);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }int shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。");
                        }
                    }else if(subject_number==2){
                            while(need_shusseki_count==0||2<need_shusseki_count){
                            printf("国語の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,100);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }if(0<need_shusseki_count){
                                //fileの関数に渡す
                            }
                        while(shusseki_nissuu_count==0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,100);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }int shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。");
                        }else if(subject_number==3){
                                 while(need_shusseki_count==0||2<need_shusseki_count){
                            printf("国語の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,100);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }if(0<need_shusseki_count){
                                //fileの関数に渡す
                            }
                        while(shusseki_nissuu_count==0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,100);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }int shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。");
                        }
                        }
                    }
                }
            }if(file_c==2){
                return 0;
            }
            }
        }
    else if(file_a==2){
        while(check_file_number==0||2<check_file_number){
        printf("ファイルを確認しますか。確認しないならそのまま終了(1 確認する,2 確認しない)");
        scanf_s("%s",check_file,100);
        check_file_number=check(check_file_number);
        if(check_file_number==0||2<check_file_number){
            printf("不当な入力です。やり直してください\n");
            }
        }
        if(check_file_number==1){
            while(file_b==0){
            printf("ファイルの名前を入力してください(4桁)");
            scanf_s("%s",file_name,100);
            file_b=check(file_name);
            if(file_b==0){
                printf("不当な入力です。やり直してください\n");
            }
        }if(file_b==1){
            //データを転送帰り値が1ならファイルが存在しないと出力
            while(file_c==0||2<file_c){
            pirntf("データの入力をしますか。しないなら終了。(1 する,2 しない)");
            scanf_s("%s",file_in,100);
            file_c=check(file_in);
            if(file_c==0||2<file_c){
                printf("不当な入力です。やり直してください\n");
            }
        }if(file_c==1){

        }else if(file_c==2){
            return 0;
        }
    }
        }else if(check_file_number==2){
            return 0;
        }
    }
}
