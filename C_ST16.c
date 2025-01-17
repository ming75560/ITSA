#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST16-易] 將五位數數字分別印出)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=684
*/

int main(){
    char number[6];
    while(scanf("%s", number) != EOF){
        for(int i = 0; i <= 3; i++){
            printf("%c   ", number[i]);
        }
        printf("%c\n", number[4]);
    }
    
    return 0;
}