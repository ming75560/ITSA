#include <stdio.h>
#include <stdlib.h>

/*
題目([C_CH04-易] 成績判斷)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=261
*/

int main(){
    int score;
    while(scanf("%d", &score) != EOF){
        if(score < 0 || score > 100){
            printf("error\n");
        }else if(score >= 0 && score < 60){
            printf("E\n");
        }else if(score >= 60 && score < 70){
            printf("D\n");
        }else if(score >= 70 && score < 80){
            printf("C\n");
        }else if(score >= 80 && score < 90){
            printf("B\n");
        }else if(score >= 90 && score <= 100){
            printf("A\n");
        }
    }

    return 0;
}