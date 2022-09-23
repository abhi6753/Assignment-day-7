//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0,temp_num,rem,sum=0;
    while(num<=1000)
    { 
      if(num==0)
      {
        printf("0 ");
        num++;
        continue;
      }
      temp_num = num;
      while(temp_num)
      {
        rem = temp_num%10;
        sum += rem*rem*rem;
        temp_num/=10;
      }
      if(sum==num)
       {
          printf("%d ",sum);
       }
      sum = 0;
      num++;
    }
    getch();
    return 0;
}