#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
題目([C_ST12-易] 星號依規則輸出)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=674
*/

int main(){
    int input[100][2];
    int count = 0;
    while(scanf("%d %d", &input[count][0], &input[count][1]) != EOF){
        count++;
    }

    for(int i = 0; i <= count - 1; i++){
        int A = input[i][0];
        int B = input[i][1];
    
        if(A >= 1 && A <= 100 && B >= 1 && B <= 100 && abs(A - B) <= 20){
            if(A > B){
                for(int j = A; j >= B; j--){
                    for(int k = 0; k <= j - 1; k++){
                        printf("*");
                    }
                    printf("\n");
                }
            }else{
                for(int j = A; j <= B; j++){
                    for(int k = 0; k <= j - 1; k++){
                        printf("*");
                    }
                    printf("\n");
                }
            }
        }

        if(i != count - 1){
            printf("\n");
        }
    }

    return 0;
}