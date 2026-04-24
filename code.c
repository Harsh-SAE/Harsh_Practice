#include<stdio.h>
typedef int (*Decide)(int,int);
int sum(int a, int b)
{
    return a+b;
}
int mul(int a, int b)
{
    return a*b;
}
int coolie(int x, int y, Decide HRS)
{
    return HRS(x,y);
}

int main()
{
    printf("The sum is %d\n",coolie(5,3,sum));
    printf("The multiplication is %d",coolie(5,3,mul));
    return 0;
}