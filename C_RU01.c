#include <stdio.h>
#include <stdlib.h>

/*
題目([C_RU01-易] 矩陣練習)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=199
*/

int main(){
    int num, n;
    scanf("%d", &num);

    while(num != 0){
        num--;
        scanf("%d", &n);
        
        if(n == 0 || n == 1){
            printf("1\n");
        }else if(n <= 20){
            long long result = 1;

            for(int i = 2; i <= n; i++){
                result *= i;
            }

            printf("%lld\n", result);
        }else{
            int result[100];
            int result_size = 19;
            char result_20[] = "2432902008176640000";
            for(int i = 0; i <= 18; i++){
                result[i] = result_20[18 - i] - '0';
            }

            for(int i = 21; i <= n; i++){
                int carry = 0;
                for(int j = 0; j <= result_size - 1; j++){
                    int product;
                    product = result[j] * i + carry;
                    result[j] = product % 10;
                    carry = product / 10;
                }

                while(carry > 0){
                    result[result_size] = carry % 10;
                    carry = carry / 10;
                    result_size++;
                }
            }

            for(int i = result_size - 1; i >= 0; i--){
                printf("%d", result[i]);
            }
            printf("\n");
        }
    }

    return 0;
}