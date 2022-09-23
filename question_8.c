//8. Write a program to find next Prime number of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,count=0;
    printf("Enter number to get next Prime number:\n");
    scanf("%d",&num);
    num++;
    while(num)
    {
        for(i=1;i<=num;i++)
        {
           if(num%i==0)
             count++;
        }
        if(count == 2)
        {
            printf("Next prime number is %d",num);
            break;
        }
        count =0;
        num++;       
    }
    getch();
    return 0;
}