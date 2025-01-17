#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_AR02-易] 一維陣列反轉 II)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=658
*/

int main(){
    long long num[6];
    for(int i = 0; i <= 5; i++){
        scanf("%lld", &num[i]);
    }

    for(int i = 5; i >= 1; i--){
        printf("%lld ", num[i]);
    }
    printf("%lld\n", num[0]);

    return 0;
}