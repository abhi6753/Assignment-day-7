//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include<math.h>
#include<conio.h>
//using namespace std;
 int main()
 {
    
    int num,sum=0,temp_num;
    short countDigit=0,rem;
    printf("Enter +ve integer to check is an Armstrong number or not: \n");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Error! Plz. enter +ve integer\n");
        return 0;
    }
    temp_num=num;
    while (temp_num)// this condition is used to count digit
    {
       countDigit++;
        temp_num/=10;
       
    }
    temp_num = num;
    while (temp_num) // this condition is used to check number is armstrong or not
    {
        rem = temp_num%10;
        power = 
        sum = sum + floor(pow(rem,countDigit));
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
