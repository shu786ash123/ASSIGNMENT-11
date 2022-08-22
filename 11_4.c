
#include<stdio.h>
int prime(int);
int main()
{
       int x,s;
       printf("ENTER A NUMBER:  \n");
       scanf("%d",&x);
       s = prime(x);
       printf("next prime number is %d",s);
       return 0;

}
int prime(int a)
{
       int flag=0,j,i;
       for(i=a+1;1;i++)
       {
              flag=0;
              for(j=2;j<=i/2;j++)
              {
                   if(i%j==0)
                     flag=1;

              }

       if(flag==0)
              return i;

       }
}

