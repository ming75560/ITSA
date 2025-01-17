#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST17-易] 判斷是否為迴文)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=685
*/

int main(){
    char palindrome[100];
    while(scanf("%s", palindrome) != EOF){
        int flag = 0;
        for(int i = 0; i <= ((int)strlen(palindrome) / 2) - 1; i++){
            if(palindrome[i] != palindrome[(int)strlen(palindrome) - i - 1]){
                flag = 1;
                printf("NO\n");
            }
        }

        if(flag == 0){
            printf("YES\n");
        }
    }
    
    return 0;
}