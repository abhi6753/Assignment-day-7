//3. Write a program to check whether a given number is there in the Fibonacci\
series or not.
#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
int main()
{
    int n,t1,t2,t3,i=0;
    bool key =false;
    t1=-1;
    t2 =1;
    printf("Enter number to check whether a given number is there in the Fibonacci series or not:\n");
    scanf("%d",&n);
    while(i<=n) //note : Answer is condition se aayea lekin agr mujhe 4181 mujhe check krn hai series me hai ya ni to
        //agr series me rha tb to loop se exit ho jayega lekin agr series  wo no. ni rha to fir while loop no. k equal time chlega jo ki 
        // accha logic ni hai
        
    {
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
        if(t3==n)
        {
          key =true;
          break;
        }  
        i++;
    }
    if(key)
    printf("%d is in the Fibonacci series",n);
    else
    printf("%d is not in the Fibonacci series",n);
    getch();
    return 0;
}
