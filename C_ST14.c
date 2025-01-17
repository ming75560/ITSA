#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
題目([C_ST14-易] 數字直角三角形輸出)：
https://etutor2.itsa.org.tw/mod/topics/view.php?id=676
*/

int main(){
    char graph[][91] = {"1\n", 
                        " 1\n21\n", 
                        "  1\n 21\n123\n", 
                        "   1\n  21\n 123\n4321\n", 
                        "    1\n   21\n  123\n 4321\n12345\n", 
                        "     1\n    21\n   123\n  4321\n 12345\n654321\n", 
                        "      1\n     21\n    123\n   4321\n  12345\n 654321\n1234567\n", 
                        "       1\n      21\n     123\n    4321\n   12345\n  654321\n 1234567\n87654321\n", 
                        "        1\n       21\n      123\n     4321\n    12345\n   654321\n  1234567\n 87654321\n123456789\n"};
    
    int number[100];
    int count = 0;
    while(scanf("%d", &number[count]) != EOF){
        count++;
    }

    for(int i = 0; i <= count - 1; i++){
        printf("%s", graph[number[i] - 1]);

        if(i != count - 1){
            printf("\n");
        }
    }

    return 0;
}