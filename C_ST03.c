#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST03-易] 萬國碼轉成對應字元)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=211
*/

int main(){
    int ASCII;
    while(scanf("%d", &ASCII) != EOF){
        printf("%c\n", ASCII);
    }

    return 0;
}