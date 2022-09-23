//7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,count=0;
    printf("Enter two numbers to print prime number between them:\n");
    scanf("%d%d",&a,&b);
    a = a++;
    while(a<b)
    {
       for(i=1;i<=a;i++)
       {
          if(a%i == 0)
            count++;
       }
       if(count == 2)
         printf("%d ",a);
       count =0;
       a++;
    }
    getch();
    return 0;
}