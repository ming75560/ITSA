#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST10-易] 星號直角三角形輸出)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=656
*/

int main(){
    int n;
    scanf("%d", &n);

    if(n % 2 == 0){
        n--;
    }

    for(int i = 1; i <= (n + 1) / 2; i++){
        for(int j = 1; j <= (n - (2 * i - 1)) / 2; j++){
            printf(" ");
        }

        for(int j = 1; j <= (i * 2) - 1; j++){
            printf("*");
        }

        printf("\n");
    }

    for(int i = (n + 1) / 2 - 1; i >= 1; i--){
        for(int j = (n - (2 * i - 1)) / 2; j >= 1; j--){
            printf(" ");
        }

        for(int j = (i * 2) - 1; j >= 1; j--){
            printf("*");
        }

        printf("\n");
    }
    

    return 0;
}