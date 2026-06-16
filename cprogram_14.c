#include<stdio.h>
int main()
{
    int num, first, last, temp, div = 1, middle, result;
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
    middle = (num % div) / 10;
    result = last * div + middle * 10 + first;
    printf("Number after interchange = %d", result);
    return 0;
}