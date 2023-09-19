#include <stdio.h>

int main() {
    int x, s = 0;
    printf("Write your digit:");
    scanf("%i", &x);
    for (int i = 1; i <= x / 2; ++i) {
        if (x % i == 0) {
            s += i;
        }
    }
    if (x > s) {
        printf("Yes!");
    } else {
        printf("No!");
    }
    return 0;
}
