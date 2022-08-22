#include<stdio.h>
int lcm(int,int);
int main()
{
       int a,b,s;
       printf("ENTER TWO NUMBER:  \n");

       scanf("%d%d",&a,&b);
       printf("LCM OF TWO NUMBER - %d AND %d  is:   \n  ",a,b);
       s = lcm(a,b);
       printf("%d",s);
       return 0;
}
int lcm(int x,int y)
{
       int i;
       for(i=2;i<=x*y;i++)
       {
              if(i%(x*y)==0)
                     return i;
       }

}
