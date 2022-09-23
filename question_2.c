//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
#include<conio.h>
int main()
{
    int N,t1,t2,t3,i=0;
    t1 = -1;
    t2 = 1;
    printf("Enter number to print first N terms of Fibonacci series:\n");
    scanf("%d",&N);
    printf("Fibonacci series of %d terms are:\n",N);
    while(i<=N)
    {
        t3 = t1+t2;
        printf("%d ",t3);
        t1 = t2;
        t2 = t3;
        i++;
    }
    getch();
    return 0;
}