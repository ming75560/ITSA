#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
題目([C_CH06-易] 判斷輸入變數的形式)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=273
*/

int main(){
    char input[100];
    while(scanf("%s", input) != EOF){
        if(strlen(input) == 1 && !isdigit(input[0])){
            printf("char\n");
        }else if(strlen(input) > 1){
            int flag = 0;
            for(int i = 0; i <= (int)strlen(input) - 1; i++){
                if(!isdigit(input[i]) && input[i] != '.' && flag == 0){
                    printf("string\n");
                    flag = 1;
                }
            }

            if(flag == 0 && input[strlen(input) - 1] != '.'){
                for(int i = 0; i <= (int)strlen(input) - 2; i++){
                    if(input[i] == '.'){
                        printf("float\n");
                        flag = 1;
                    }
                }

                if(flag == 0){
                    printf("int\n");
                }
            }else if(flag == 0 && input[strlen(input) - 1] == '.'){
                printf("string\n");
            }
        }
    }

    return 0;
}