#include<stdio.h>
int sq(int);
       int main()
       {
              int x,s;
              printf("enter a number: \n");
              scanf("%d",&x);
              s = sq(x);
              printf("square of %d  is %d",x,s);
              return 0;
       }
       int sq(int a)
       {
              return a*a;
       }

