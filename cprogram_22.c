#include<stdio.h>
int main()
{
    int num, twoDigit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    while(num >= 10)
    {
        twoDigit = num % 100;   
        if(twoDigit % 2 != 0)
            count++;

        num = num / 10;
    }
    printf("Total two-digit odd numbers = %d", count);
    return 0;
}