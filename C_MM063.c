#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
題目([C_MM063-易] N階層末尾0的數量)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=1058
*/

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int count = 0;
        while(n >= 5){
            count += n / 5;
            n /= 5;
        }

        printf("%d\n", count);
    }

    return 0;
}   