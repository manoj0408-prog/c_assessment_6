#include<stdio.h>
int main()
{
    int num, temp, digit, sum, count = 0;

    for(num = 1; num < 100000; num++)
    {
        temp = num;
        sum = 0;
        while(temp > 0)
        {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
        if(sum == 14)
        {
            count++;
        }
    }
    printf("Total count = %d", count);
    return 0;
}