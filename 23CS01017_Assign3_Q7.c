#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, k;
    printf("Enter Marks obtained (between 0 and 10), no of classes(attended and conducted resp): ");
    scanf("%d%d%d", &m, &n, &k);

    float f_n = n, f_k = k;
    float w = (f_n / f_k);
    float f_t = m * w;
    printf("Final Score = %f\n", f_t);
    int t = round(f_t);
    printf("Final Score (rounded off to integer) = %d\n", t);

    if (t >= 90.0)
        printf("Grade = EX");
    else if (t >= 80.0 && t < 89.0)
        printf("Grade = A");
    else if (t >= 70.0 && t < 79.0)
        printf("Grade = B");
    else if (t >= 60.0 && t < 69.0)
        printf("Grade = C");
    else if (t >= 50.0 && t < 59.0)
        printf("Grade = D");
    else if (t >= 40.0 && t < 49.0)
        printf("Grade = P");
    else
        printf("Grade = F");
    return 0;
}