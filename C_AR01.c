#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_AR01-易] 一維陣列反轉 I)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=274
*/

int main(){
    char array[100];
    while(gets(array)){
        int space = 0;
        for(int i = 1; i <= (int)strlen(array) - 2; i++){
            if(array[i] == ' '){
                space++;
            }
        }
        space++;

        int *num = (int*)calloc(space, sizeof(int));

        int index = 0;
        for(int i = 0; i <= space - 1; i++){
            while(index <= (int)strlen(array) - 1 && array[index] != ' '){
                num[i] += (int)(array[index] - '0');
                num[i] *= 10;
                index++;
            }
            index++;
            num[i] /= 10;
        }
        
        for(int i = space - 1; i >= 1; i--){
            printf("%d ", num[i]);
        }
        printf("%d\n", num[0]);
    }

    return 0;
}