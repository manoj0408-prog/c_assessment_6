#include<stdio.h>
int main()
{
    int num, last2, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    last2 = num % 100;   
    for(i = 1; i <= last2; i++)
    {
        if(last2 % i == 0)
            count++;
    }
    if(count == 2)
        printf("%d is Prime",num);
    else
        printf("%d is Not Prime",num);
    return 0;
}