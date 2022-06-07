

#include <stdio.h>

int main()
{
    int K, N = 1, count = 0;
    printf("Enter your number: ");
    scanf("%d", &K);
    int i = K;
    while (i != 0)
    {
        count++;
        i /= 10;
    }
    for (i = 1; i <= count; i++)
    {
        N *= 10;
    }
    unsigned long s = K * K;
    int R = s % (N);
    int L = s / (N);
    if ((R + L) == K)
        printf("Kaprekar number");
    else
        printf("Not a Kaprekar number");
}