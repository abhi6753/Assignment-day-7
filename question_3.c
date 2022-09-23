//3. Write a program to check whether a given number is there in the Fibonacci\
series or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,t1,t2,t3,i=0;
    t1=-1;
    t2 =1;
    printf("Enter number to check whether a given number is there in the Fibonacci series or not:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
        if(t3==n)
        {
          printf("%d is in the Fibonacci series",n);
          break;
        }          
    }
    getch();
    return 0;
}