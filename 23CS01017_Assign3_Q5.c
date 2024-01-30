#include <stdio.h>
int main()
{
    int nos_day, fine;
    printf("No of days after book is returned late: ");
    scanf("%d", &nos_day);

    if (nos_day <= 30)
    {
        if (nos_day <= 5)
            fine = 1;
        else if (nos_day > 5 && nos_day <= 10)
            fine = 2;
        else
            fine = 5;
        printf("Fine to be paid (in Rs): %d", fine);
    }
    else
        printf("Your Membership is cancelled!!");
    return 0;
}