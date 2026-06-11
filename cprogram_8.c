
#include <stdio.h>
int main()
{
    int a,b, c, d;
    a=10;
    while(a<100)
    {
    if(a%2==0)
    {
    b=a%10;
    c=(a/10)%10;
    d=c+b;
    if(d==6)
    {
    printf("%d\n",a);
    }
    }
    a++;
    }
}