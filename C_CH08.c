#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
題目([C_CH08-易] 計算MVP數值)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=281
*/

int main(){
    int PPG, rebound, assist, steal, turnover;
    int MVP;
    scanf("%d %d %d %d %d", &PPG, &rebound, &assist, &steal, &turnover);

    MVP = (PPG * 1 + assist * 2 + rebound * 2 + steal * 2) - (turnover * 2);
    if(MVP >= 45){
        printf("A\n");
    }else if(MVP >= 35 && MVP < 45){
        printf("B\n");
    }else if(MVP >= 25 && MVP < 35){
        printf("C\n");
    }else if(MVP < 25){
        printf("D\n");
    }

    return 0;
}