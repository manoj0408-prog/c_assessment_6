#include<stdio.h>

int main()
{
    int num, temp, sum = 0, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
   
    temp = num;
    while(temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
   
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
            count++;
    }
    if(count == 2 && sum == 14)
        printf("Prime Number and Sum of Digits = 14");
    else
        printf("Condition Not Satisfied");
    return 0;
}