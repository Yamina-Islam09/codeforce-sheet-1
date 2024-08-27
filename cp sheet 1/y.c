
#include <stdio.h>

int main() {
    unsigned long long A, B, C, D;

    // Read the input values
    scanf("%llu %llu %llu %llu", &A, &B, &C, &D);

    // Calculate the product modulo 100 to get the last two digits
    //jkono number k 100 diye divide krle remainder e last 2 digit pawa jai

    unsigned long long result = A % 100;

    result = (result * (B % 100)) % 100;

    result = (result * (C % 100)) % 100;

    result = (result * (D % 100)) % 100;


    // Print the result
    printf("%02llu\n", result);

    return 0;
}


