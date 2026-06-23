#include<stdio.h>
#include<stdlib.h>
#include"date.h"
#include"judge.h"
#include"file_manager.h"
#include"count_check.h"

int a,b,c;

int main(){
    int file_a=0,file_b=0,file_c=0,subject_number=0,
        need_shusseki_count=0,shusseki_nissuu_count=0,shusseki_difference=0,file_po=0;
    char file[1024],file_name[1024],file_in[1024],subject[1024],
    shusseki_nissuu[1024],need_shusseki[1024];
    while(file_a==0||2<file_a){
    printf("ファイルを作成しますか?(1 作成する,2 作成しない:)");
    scanf_s("%s",file,1024);
    file_a=check(file);
    if(file_a==0||2<file_a){
        printf("不当な入力です。やり直してください\n");
    }
    }
    if(file_a==1){
    while(file_b==0){
        printf("ファイル名を入力してください(4桁)");
        scanf_s("%s",file_name,1024);
        file_b=file_name_check(file_name);
        if(file_b==0){
            printf("不当な入力です。やり直してください\n");
        }
    else if(file_b==1) {
     while(file_c==0||2<file_c){
            file_po=createFile(file_name);
            printf("そのまま入力しますか?入力しないならそのまま終了します(1 入力する,2 入力しない:)");
            scanf_s("%s",file_in,1024);
            file_c=check(file_in);
            if(file_c==0){
                printf("不当な入力です。やり直してください\n");
            }
            }if(file_c==1){
                while(subject_number<1||3<subject_number){
                    printf("教科を入力してください(1 国語,2 数学,3 英語)");
                    scanf_s("%s",subject,1024);
                    subject_number=check(subject);
                    if(subject_number==0||3<subject_number){
                        printf("不当な入力です。やりなおしてください");
                    }
                }if(subject_number==1){
                        while(need_shusseki_count<=0){
                            printf("国語の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,1024);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }
                        while(shusseki_nissuu_count<=0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,1024);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください");
                            }
                        }if(0<shusseki_nissuu_count){
                                //fileにデータを送信
                                saveData(
                                file_name,
                                subject_number,
                                need_shusseki_count,
                                shusseki_nissuu_count
                                );
                            }
                        int shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。",shusseki_difference);
                        }
                    }
                    else if(subject_number==2){
                            while(need_shusseki_count<=0){
                            printf("数学の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,1024);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }
                        while(shusseki_nissuu_count<=0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,1024);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        int shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。",shusseki_difference);
                        }
                    }
                    }else if(subject_number==3){
                                 while(need_shusseki_count<=0){
                            printf("英語の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,1024);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }
                        while(shusseki_nissuu_count<=0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,1024);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        int shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。",shusseki_difference);
                        } 
                        }
                    }
                    }
                }
            }if(file_c==2){
                return 0;
            }
        }
    else if(file_a==2){
            while(file_b==0){
            printf("ファイルの名前を入力してください(4桁)");
            scanf_s("%s",file_name,1024);
            file_b=file_name_check(file_name);
            if(file_b==0){
                printf("不当な入力です。やり直してください\n");
            }
        }
    
            while(file_c==0||2<file_c){
            printf("データの入力をしますか。しないなら終了。(1 する,2 しない)");
            scanf_s("%s",file_in,1024);
            file_c=check(file_in);
            if(file_c==0||2<file_c){
                printf("不当な入力です。やり直してください\n");
            }else if(file_c==1){
while(subject_number<1||3<subject_number){
                    printf("教科を入力してください(1 国語,2 数学,3 英語)");
                    scanf_s("%s",subject,1024);
                    subject_number=check(subject);
                    if(subject_number==0||3<subject_number){
                        printf("不当な入力です。やりなおしてください");
                    }
                }if(subject_number==1){
                        while(need_shusseki_count<=0){
                            printf("国語の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,1024);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }
                        while(shusseki_nissuu_count<=0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,1024);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。",shusseki_difference);
                        }
                    }else if(subject_number==2){
                            while(need_shusseki_count<=0){
                            printf("数学の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,1024);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }
                        while(shusseki_nissuu_count<=0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,1024);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。",shusseki_difference);
                        } 
                    }else if(subject_number==3){
                                 while(need_shusseki_count<=0){
                            printf("英語の必要な出席日数を入力してください");
                            scanf_s("%s",need_shusseki,1024);
                            need_shusseki_count=check(need_shusseki);
                            if(need_shusseki_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }
                        while(shusseki_nissuu_count<=0){
                            printf("出席している日数を教えてください");
                            scanf_s("%s",shusseki_nissuu,1024);
                            shusseki_nissuu_count=check(shusseki_nissuu);
                            if(shusseki_nissuu_count==0){
                                printf("不当な入力です。やり直してください\n");
                            }
                        }shusseki_difference=count_check(need_shusseki,shusseki_nissuu);
                        if(shusseki_difference==-1){
                            printf("出席日数は、足りています\n");
                        }else if(0<shusseki_difference){
                            printf("あと%d日出席してください。",shusseki_difference);
                        } 
                        }
        }else if(file_c==2){
            return 0;
        }
    }
    }
    }
    

