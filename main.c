#include <stdio.h>

int main(void) {
    /*３の倍数のときFizz, ５の倍数のときBuzz, ３の倍数かつ５の倍数のときFizzBuzz, それ以外は数字そのまま出力*/
    int num;
    printf("整数を入力してください:");
    scanf("%d", &num);

    int i;
    for (i = 1; i <= num; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;

}