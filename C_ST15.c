#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST15-易] 數字矩形輸出)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=679
*/

int main(){
    int input[100];
    int count = 0;
    while(scanf("%d", &input[count]) != EOF){
        count++;
    }

    for(int i = 0; i <= count - 1; i++){
        int n = input[i];
        for(int j = 0; j <= n - 2; j++){
            for(int k = 0; k <= j; k++){
                printf("%d", k + 1);
            }

            for(int k = n - 1; k >= j + 1; k--){
                printf("%d", k + 1);
            }

            printf("\n");
        }
        
        if(i != count - 1){
            printf("\n");
        }
    }

    return 0;
}