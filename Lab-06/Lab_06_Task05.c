/*
    Programming Fundamental Lab
    Syed Sajid Ali
    Lab: 06
    Task: 05
*/

#include <stdio.h>

int main() {
    int n;
    long long fact_2n = 1;
    long long fact_n = 1;
    long long fact_n1 = 1;
    long long catalan;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n; i++)
        fact_2n = fact_2n * i;

    for (int i = 1; i <= n; i++)
        fact_n = fact_n * i;

    for (int i = 1; i <= n + 1; i++)
        fact_n1 = fact_n1 * i;

    catalan = fact_2n / (fact_n1 * fact_n);

    printf("Catalan number C_%d = %lld\n", n, catalan);

    return 0;
}