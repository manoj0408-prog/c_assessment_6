#include<stdio.h>
int main()
{
    int num, temp, div = 1, first, last, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    temp = num;
    while(temp >= 10)
    {
        temp = temp / 10;
        div = div * 10;
    }
    first = temp;
    if(last % 2 != 0)
    {
        first = first - 1;
        result = first * div + (num % div);
    }
    else
    {
        result = num;
    }
    printf("Result = %d", result);
    return 0;
}