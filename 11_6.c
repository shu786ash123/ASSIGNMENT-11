#include<stdio.h>
void prime(int,int);
int main()
{
       int a,b;
       printf("enter two number:  \n");
       scanf("%d%d",&a,&b);
       prime(a,b);
       return 0;
}
void prime(int a,int b)
{
       int n,flag=0,i;
       printf("prime no between %d and %d is :  \n ",a,b);
       for(n=a+1;n<=b-1;n++)
       {
              flag=0;
              for(i=2;i<=n/2;i++)
              {
                     if(n%i==0)
                            flag = 1;

              }
              if(flag==0)
                     printf(" %d  ",n);

       }
}
