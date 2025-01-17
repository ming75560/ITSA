#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
題目([C_CH07-易] 標準體重計算)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=278
*/

int main(){
    float height;
    int gender;
    while(scanf("%f %d", &height, &gender) != EOF){
        if(gender == 1){
            printf("%.1f\n", (height - 80) * 0.7);
        }else if(gender == 2){
            printf("%.1f\n", (height - 70) * 0.6);
        }
    }

    return 0;
}