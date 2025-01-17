#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
題目([C_MM075-易] 店家找錢)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=1081
*/

int main(){
    int K, N;
    int coin[6];
    int value[] = {500, 100, 50, 10, 5, 1};
    int total_coin = 0;
    scanf("%d %d", &K, &N);
    for(int i = 0; i <= N - 1; i++){
        scanf("%d", &coin[i]);
    }

    int change = 1000 - K * N;

    int i = 0;
    while(i <= 5 && change != 0){
        int coin_num = change / value[i];
        if(coin_num > coin[i]){
            coin_num = coin[i];
        }
        change = change - coin_num * value[i];
        total_coin += coin_num;
        
        i++;
    }

    if(change == 0){
        printf("%d\n", total_coin);
    }else{
        printf("0\n");
    }

    return 0;
}   