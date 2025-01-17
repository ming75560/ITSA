#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_AR03-易] 計算陣列中所有元素的立方和)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=659
*/

int main(){
    long long num[6];
    for(int i = 0; i <= 5; i++){
        scanf("%lld", &num[i]);
    }

    long long sum = 0;

    for(int i = 0; i <= 5; i++){
        sum += num[i] * num[i] * num[i];
    }
    printf("%lld\n", sum);

    return 0;
}