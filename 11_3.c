
#include<stdio.h>
int prime(int);
int main()
{
       int s,a;
       printf("ENTER A NUMBER: \n");
       scanf("%d",&a);
         s =  prime(a);
         if(s==1)
              printf("%d is a prime number ",a);
         else
              printf("%d is not a prime number ",a);
       return 0;
}
int prime(int x)
{
       int count=0,i;
       for(i=1;i<=x;i++)
       {
              if(x%i==0)

                     count++;

       }

       if(count==2)
              return 1;
        else
            return 0;



}




