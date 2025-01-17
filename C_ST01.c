#include <stdio.h>
#include <stdlib.h>

/*
題目([C_ST01-易] 數制轉換)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=198
*/

int main(){
    int carry, num;
    char digit[] = "0123456789ABCDEF";
    while(scanf("%d %d", &carry, &num) != EOF){
        char result_r[8];
        int index = 0;
        while(num != 0){
            result_r[index] = digit[num % carry];
            num = num / carry;
            index++;
        }
        char *result = (char*)malloc(sizeof(char) * index);
        for(int i = 0; i <= index - 1; i++){
            result[i] = result_r[index - i - 1];
        }

        printf("%s\n", result);
    }

    return 0;
}