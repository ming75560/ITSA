#include <stdio.h>
#include <stdlib.h>

/*
題目([C_CH02-易] Online Game 選擇性別)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=223
*/

int main(){
    char gender;
    while(scanf("%c", &gender) != EOF){
        switch(gender){
            case 'E':
                printf("ByeBye\n");
                break;
            case 'M':
                printf("Male\n");
                break;
            case 'F':
                printf("Female\n");
                break;
        }
    }

    return 0;
}