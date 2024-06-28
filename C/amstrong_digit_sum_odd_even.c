#include <stdio.h>

int isamstrong(int num);
int power(int base, int expo);
int digit(int num);

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    if (digit(n) % 2) {
        if (isamstrong(n))
            n /= 10;
        while (n) {
            sum += n % 10;
            n /= 100;
        }
    } else {
        if (!isamstrong(n))
            n /= 10;
        while (n) {
            sum += n % 10;
            n /= 100;
        }
    }

    printf("%d", sum);

    return 0;
}

int digit(int num) {
    int count = 0;
    while (num) {
        num /= 10;
        count++;
    }
    return count;
}

int isamstrong(int num) {
    int a = num, b = 0;
    while (a) {
        b += power(a % 10, digit(num));
        a /= 10;
    }
    if (b == num)
        return 1;
    return 0;
}

int power(int base, int expo) {
    int res = 1;
    for (int i = 0; i < expo; i++)
        res *= base;
    return res;
}

