#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST26-易] 信用卡卡號檢查)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=1056
*/

int main(){
    char card_num[21];
    int num[17];
    int total = 0;
    scanf("%s", card_num);

    if(strlen(card_num) != 16){
        printf("Error\n");
    }else{
        for(int i = 0; i <= 15; i++){
            if(i % 2 == 0){
                num[i] = (card_num[i] - '0') * 1;
            }else{
                num[i] = (card_num[i] - '0') * 2;
            }

            num[i] = (num[i] / 10) + (num[i] % 10);
            total += num[i];
        }

        if(total % 10 == 0){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    
    return 0;
}