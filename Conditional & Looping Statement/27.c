// 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include <stdio.h>

int main() {
    int n, sign = 1, i;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        float term = (float)i / (i + 1);
        sum += sign * term;
        sign = -sign;  // Toggle the sign for the next term
    }

    printf("Sum of the series for n = %d is %.2f\n", n, sum);

    return 0;
}

