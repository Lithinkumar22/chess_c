#include<stdio.h>
int main ()
{
   int x,n,y,m,solution;
   printf("enter the first row and first column");
   scanf("%d %d ",&x,&n);
   printf("enter the second row and second column");
   scanf("%d %d",&y,&m);
   solution=n+x+m+y;
   if(solution%2==0)
   {
        printf("True");
    }
     else
     {
            printf("False");
       }         
}
