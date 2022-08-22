
#include<stdio.h>
void prime(int);
int main()
{
       int a;
       printf("ENTER A NUMBER: \n");
       scanf("%d",&a);
         prime(a);
        return 0;
}
void prime(int n)
{
       int x=2,i;
       printf("first %d prime number is:   ",n);
       while(n)
       {
              for(i=2;i<x;i++)
                     if(x%i==0)
                     break;
              if(i==x)
              {
                     printf(" %d  ",x);
                     n--;
              }
              x++;
       }

}
