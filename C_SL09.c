#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
題目([C_SL09-易] 霓虹燈泡)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=944
*/

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n - 1; i++){
        int bulb_num;
        scanf("%d", &bulb_num);
        bool *bulb = (bool*)calloc(bulb_num, sizeof(bool));

        for(int j = 1; j <= bulb_num; j++){
            int index = j;
            while(index <= bulb_num){
                if(bulb[index - 1] == true){
                    bulb[index - 1] = false;
                }else{
                    bulb[index - 1] = true;
                }
                index += j;
            }
        }

        int count = 0;
        for(int j = 0; j <= bulb_num - 1; j++){
            if(bulb[j] == true){
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}