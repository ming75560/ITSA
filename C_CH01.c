#include <stdio.h>
#include <stdlib.h>

/*
題目([C_CH01-易] Online Game 選擇角色)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=221
*/

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        switch(n){
            case 1:
                printf("Person\n");
                break;
            case 2:
                printf("Fairy\n");
                break;
            case 3:
                printf("Dwarf\n");
                break;
        }
    }

    return 0;
}