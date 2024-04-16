#include <stdio.h>

int main() {
    int base, ans[100] = {1}, i, power, stop, p = 0, u = 1, ans1 = 0;

    printf("\nEnter Base : ");
    scanf("%d", &base);
    printf("Enter Power : ");
    scanf("%d", &power);

    stop = base;

    for (i = 1; i <= power; i++) {
        u *= base; // Update u with the base raised to the current power
        ans[++p] = u; // Store the result in the ans array
    }

    for (i = 0; i <= power; i++) {
        ans1 += ans[i];
        printf("\nAns is : %d", ans1);
    }

    return 0;
}
