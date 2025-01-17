#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST04-易] 字元符號轉換成標準萬國碼)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=213
*/

int main(){
    int n;
    char subject[5], verb[5], object[5];
    char S[][5] = {"I", "He", "She", "They", "Mary", "John"};
    char V[][5] = {"love", "like", "see", "find"};
    char O[][5] = {"me", "him", "her", "them", "Mary", "John"};
    char R[][11] = {"myself", "himself", "herself", "themselves", "herself", "himself"};
    scanf("%d", &n);
    for(int i = 0; i <= n - 1; i++){
        scanf("%s %s %s", subject, verb, object);

        int index_S, index_V, index_O;
        index_S = -1;
        index_V = -1;
        index_O = -1;

        int index, flag;
        index = 0;
        flag = 0;
        while(index <= 3 && flag == 0){
            if(strcmp(subject, V[index]) == 0 && flag == 0){
                index_V = index;
                char tmp[5];
                strcpy(tmp, subject);
                strcpy(subject, verb);
                strcpy(verb, tmp);
                flag = 1;
            }

            if(strcmp(object, V[index]) == 0 && flag == 0){
                index_V = index;
                char tmp[5];
                strcpy(tmp, object);
                strcpy(object, verb);
                strcpy(verb, tmp);
                flag = 1;
            }
            index++;
        }

        index = 0;
        flag = 0;
        while(index <= 3 && flag == 0){
            if(strcmp(subject, O[index]) == 0 && flag == 0){
                index_O = index;
                char tmp[5];
                strcpy(tmp, subject);
                strcpy(subject, object);
                strcpy(object, tmp);
                flag = 1;
            }

            if(strcmp(object, S[index]) == 0 && flag == 0){
                index_S = index;
                char tmp[5];
                strcpy(tmp, object);
                strcpy(object, subject);
                strcpy(subject, tmp);
                flag = 1;
            }
            index++;
        }

        if(index_S == -1){
            index = 0;
            flag = 0;
            while(index <= 5 && flag == 0){
                if(strcmp(subject, S[index]) == 0){
                    index_S = index;
                    flag = 1;
                }
                index++;
            }
        }
        
        if(index_V == -1){
            index = 0;
            flag = 0;
            while(index <= 3 && flag == 0){
                if(strcmp(verb, V[index]) == 0){
                    index_V = index;
                    flag = 1;
                }
                index++;
            }
        }
        
        if(index_O == -1){
            index = 0;
            flag = 0;
            while(index <= 5 && flag == 0){
                if(strcmp(object, O[index]) == 0){
                    index_O = index;
                    flag = 1;
                }
                index++;
            }
        }

        if(index_S == index_O || ((index_S == 1 && index_O == 5) || (index_S == 2 && index_O == 4) || (index_S == 4 && index_O == 2) || (index_S == 5 && index_O == 1))){
            printf("%s ", subject);
            if(index_S == 1 || index_S == 2 || index_S == 4 || index_S == 5){
                printf("%ss ", verb);
            }else{
                printf("%s ", verb);
            }
            printf("%s\n", R[index_O]);
        }else if((index_S == 4 && index_O == 5) || (index_S == 5 && index_O == 4)){
            printf("%s %ss %s or %s %ss %s\n", subject, verb, object, object, verb, subject);
        }else{
            printf("%s ", subject);
            if(index_S == 1 || index_S == 2 || index_S == 4 || index_S == 5){
                printf("%ss ", verb);
            }else{
                printf("%s ", verb);
            }
            printf("%s\n", object);
        }
    }

    return 0;
}