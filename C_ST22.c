#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST22-易] 迴文字串 II)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=934
*/

int main(){
    char string[256];
    while(scanf("%s", string) != EOF){
        for(int i = strlen(string) - 1; i >= 0; i--){
            if(string[i] >= 'a' && string[i] <= 'z'){
                printf("%c", string[i] - 'a' + 'A');
            }else if(string[i] >= 'A' && string[i] <= 'Z'){
                printf("%c", string[i] - 'A' + 'a');
            }else{
                printf("%c", string[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}