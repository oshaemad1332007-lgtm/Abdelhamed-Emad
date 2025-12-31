#include <stdio.h>

int main() {
    int num = 2; 

    while (num <= 50) {
        int i = 2;
        int isPrime = 1; 

        while (i * i <= num) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }

        if (isPrime) {
            printf("%d ", num);
        }

        num++;
    }

    return 0;
}
