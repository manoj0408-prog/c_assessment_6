#include<stdio.h>
int main()
{
    int num, middle, i, count = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    middle = (num / 10) % 100;   
    for(i = 1; i <= middle; i++)
    {
        if(middle % i == 0)
            count++;
    }
    if(count == 2)
        printf("%d is Prime", middle);
    else
        printf("%d is Not Prime", middle);
    return 0;
}