#include<stdio.h>
typedef int (*FP)(int,int);
int sum(int x, int y){return x+y;};
int sub(int x, int y){return x-y;};
int mul(int x, int y){return x*y;};
int div(int x, int y){return x/y;};
int MASTER(FP hrs, int x,int y)
{
    return hrs(x,y);
}
int main()
{
    printf("The sum evaluation is %d\n",MASTER(sum,100,20));
    printf("The sub evaluation is %d\n",MASTER(sub,100,20));
    printf("The mul evaluation is %d\n",MASTER(mul,100,20));
    printf("The div evaluation is %d\n",MASTER(div,100,20));
    return 0;
}
