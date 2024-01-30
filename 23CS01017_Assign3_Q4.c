#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter the coordinates: ");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

    if ((e - c) * (d - b) == (f - d) * (c - a))
        printf("Coordinates are Collinear");
    else
        printf("Coordinates are NOT Collinear");
    return 0;
}