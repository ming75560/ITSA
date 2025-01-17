#include <stdio.h>
#include <stdlib.h>

/*
題目([C_CH03-易] 判斷基數偶數)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=260
*/

int main(){
    int number;
    while(scanf("%d", &number) != EOF){
        if(number % 2 == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }

    return 0;
}