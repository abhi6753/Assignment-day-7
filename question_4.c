//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,C_Factor=0;
    printf("Enter two number to calculate HCF:\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=(a<b?a:b);i++)
    {
        if(a%i==0 && b%i ==0)
        {
            C_Factor++;
        }  
    }
    printf("HCF of %d and %d is %d",a,b,C_Factor);
    getch();
    return 0;
}