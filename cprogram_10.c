
#include <stdio.h>
int main()
{
    int a,b, c=0;
    a=10;
    while(a<100)
    {
    if(a%2==1)
    {
    b=(a/10)%10;
    if(b==7)
    {
    c=c+a;
    }
    }
    a++;
    }
    printf("%d\n",c);
    
    
}