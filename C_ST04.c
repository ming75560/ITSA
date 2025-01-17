#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST04-易] 字元符號轉換成標準萬國碼)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=213
*/

int main(){
    char character;
    while(scanf("%c", &character) != EOF){
        if (character == '\n') {
            continue;
        }
        printf("%d\n", character);
    }

    return 0;
}