#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST02-易] 迴文字串)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=200
*/

int main(){
    int n;
    scanf("%d", &n);
    while(n){
        n--;
        int length;
        char string[256];

        scanf("%s", string);
        length = strlen(string);

        for(int i = length - 1; i >= 0; i--){
            printf("%c", string[i]);
        }
        printf("\n");
    }

    return 0;
}