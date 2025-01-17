#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
題目([C_MM065-易] 找零錢問題)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=1063
*/

int main(){
    int N, a1, a2, a3;
    scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);

    int total_cost = a1 * 15 + a2 * 20 + a3 * 30;

    if(N < total_cost){
        printf("0\n");
    }else{
        int change = N - total_cost;

        int coin_50 = change / 50;
        change %= 50;

        int coin_5 = change / 5;
        change %= 5;

        int coin_1 = change;

        printf("%d,%d,%d\n", coin_1, coin_5, coin_50);
    }

    return 0;
}   