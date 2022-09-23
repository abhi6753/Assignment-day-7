//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int t1,t2,t3,Nth;
    t1 = -1;
    t2 = 1;
    int i=0;
    printf("Enter the number to find the Nth term of Fibonnaci series:\n");
    scanf("%d",&Nth);
    while(i<=Nth)
    {
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
        i++;
    }
    printf("%dth term of Fibonnaci series is %d",Nth,t3);
    getch();
    return 0;
}