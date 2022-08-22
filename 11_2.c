#include<stdio.h>
int hcf(int,int);
int main()
{
       int s,a,b;
       printf("ENTER TWO NUMBER:  \n");
       scanf("%d%d",&a,&b);
       s = hcf(a,b);
       printf("HCF OF %d and %d  IS:  %d \n",a,b,s);
       return 0;
}
int hcf(int x,int y)
{
       int min,i;
       for(min = (x>y) ? x : y ; min>=1;min--)

       {
              if(x%min==0 && y%min==0)
              return min;
       }
}

