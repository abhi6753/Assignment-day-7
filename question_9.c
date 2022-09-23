//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp_num,rem,sum=0;
    printf("Enter number to check armstrong or not:\n");
    scanf("%d",&num);
    temp_num = num;
    while(temp_num)
    {
        rem = temp_num%10;
        sum +=rem*rem*rem; 
        temp_num/=10;
    }
    if(num == sum)
     {
        printf("%d is an Armstrong number",num);
     }
    else 
        printf("%d is not an Armstrong number",num);
    getch();
    return 0;
}
