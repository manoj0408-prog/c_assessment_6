
#include <stdio.h>
int main()
{
    int a, b=0;
    a=5;
    while(a>0)
    {
    b=b+a;
    a--;
    }
    printf("%d\n",b);
}