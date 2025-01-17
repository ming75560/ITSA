#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
題目([C_MM072-易] 心得報數)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=1076
*/

int josephus_recursive(int N, int K){
    if(N == 1){
        return 0;
    }else{
        return (josephus_recursive(N - 1, K) + K) % N;
    }
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= n - 1; i++){
        int N, K;
        scanf("%d %d", &N, &K);

        printf("%d\n", josephus_recursive(N, K) + 1);
    }

    return 0;
}   