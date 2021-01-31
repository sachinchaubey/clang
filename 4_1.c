#include <stdio.h>

int main()
{
    int n;
    printf(" Enter the two digit no. =");
    scanf("%d", &n);
    printf("Reverse digit =%d%d\n", n % 10, n / 10);
    return 0;
}

