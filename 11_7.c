#include<stdio.h>
void fibon(int);
int main()
{
       int x;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       fibon(x);
       return 0;
}
void fibon(int x)
{
       int a=-1,b=1,c,i;
       for(i=1;i<=x;i++)
       {
              c = a+b;
              a=b;
              b=c;
              printf("%d ",c);

       }
}
