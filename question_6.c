//6. Write a program to print all Prime numbers under 100
#include<stdio.h>
#include<conio.h>
int main()
{
    int num=2,j=1,count =0;
    while(num<=100)
    {
        for(j=1;j<=num;j++)
        {
           if(num%j==0)
            {
                count++;
            }
        }
        if(count == 2)
          {
            printf("%d ",num);
          }
        count =0;
        num++;
    }
    getch();
    return 0;
}