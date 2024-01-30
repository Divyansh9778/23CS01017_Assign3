#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    if (c < 0)
        c = -c;

    if (a + b > c && b + c > a && c + a > b)
        printf("These sides form a Triangle");
    else
        printf("NOT a Triangle");
    return 0;
}