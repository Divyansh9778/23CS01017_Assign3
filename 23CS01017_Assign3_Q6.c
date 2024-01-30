#include <stdio.h>
#include <math.h>
int main()
{
    int n, len = 0, temp1, temp2, i = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int num = n * n;
    int num1 = num;
    printf("The square of %d is %d", n, num);

    while (num1 > 0)
    {
        num1 = num1 / 10;
        len++;
    }
    int len1 = len;
    len = (len / 2) + (len % 2);

    for (; len > 0; len--)
    {
        double div = pow(10, len);
        temp1 = num / div;
        temp2 = num - temp1 * div;

        if (temp1 + temp2 == n)
        {
            printf("\nAs %d + %d = %d", temp1, temp2, n);
            printf("\n%d is a KAPREKAR NUMBER", n);
            i++;
            break;
        }
    }
    if (i == 0)
    {
        for (; len < len1; len++)
        {
            double div = pow(10, len);
            temp1 = num / div;
            temp2 = num - temp1 * div;

            if (temp1 + temp2 == n)
            {
                printf("\nAs %d + %d = %d", temp1, temp2, n);
                printf("\n%d is a KAPREKAR NUMBER", n);
                i++;
                break;
            }
        }
    }
    if (i == 0)
        printf("\n%d is NOT a KAPREKAR NUMBER", n);
    return 0;
}
