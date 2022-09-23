//5. Write a program to check whether two given numbers are co-prime numbers or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a ,b,i,count =0;
    printf("Enter two number to check co-prime or not:\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=(a<b?a:b);i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            count++;
        }
    }
    if(count == 1)
      printf("(%d,%d) is co-prime number",a,b);
    else
      printf("Not co-prime");
    getch();
    return 0;
}