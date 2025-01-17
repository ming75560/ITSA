#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
題目([C_MM053-易] 近似值)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=995
*/

int main(){
    int pi[] = {1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8};
    int k;
    
    scanf("%d", &k);

    for(int i = 0; i <= k - 1; i++){
        int n;
        scanf("%d", &n);

        printf("%d\n", pi[n - 1]);
    }

    return 0;
}