
#include <stdio.h>
int main()
{
    int a,b, c=0;
    a=10;
    while(a<100)
    {
    b=a%10;
    if(b==5)
    {
    c=c+a;
    }
    a++;
    }
    printf("%d\n",c);
    
    
}