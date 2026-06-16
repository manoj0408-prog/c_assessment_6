#include<stdio.h>
int main()
{
    int i, j, count, total = 0;

    for(i = 1; i <= 9; i++)
    {
        count = 0;
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }
        if(count == 2)
            total++;
    }
    printf("Total single-digit prime numbers = %d", total);
    return 0;
}