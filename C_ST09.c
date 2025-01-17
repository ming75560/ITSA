#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST09-易] 星號矩形輸出)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=655
*/

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    for(int i = 0; i <= y - 1; i++){
        for(int j = 0; j <= x - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}