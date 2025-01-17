#include <stdio.h>
#include <stdlib.h>

/*
題目([C_RU05-易] 神密礦物)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=1003
*/

// int Fibonacci(int n){
//     if(n == 1){
//         return 1;
//     }else if(n == 2){
//         return 2;
//     }else{
//         return Fibonacci(n - 1) + Fibonacci(n - 2);
//     }
// }

int main(){
    int n;
    while(scanf("%d", &n) && n != 0){
        int Fibonacci[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352};
        // if(n > 15){
        //     n = 15;
        // }

        printf("%d\n", Fibonacci[n -1]);
    }

    return 0;
}