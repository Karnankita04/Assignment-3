// 1. Write a program to check whether a given number is positive or non-positive.
/*
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ") ;
    scanf("%d",&num) ;

    if(num>0)
        printf("Positive") ;
    else
        printf("Non positive") ;
    return 0;
}
*/

// 2. Write a program to check whether a given number is divisible by 5 or not
/*
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ") ;
    scanf("%d",&num) ;

    if(num%5 == 0)
        printf("%d is divisible by 5",num) ;
    else
        printf("%d is not divisible by 5",num) ;
    return 0;
}
*/

// 3. Write a program to check whether a given number is an even number or an odd number.
/*
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ") ;
    scanf("%d",&num) ;

    if(num%2 == 0)
        printf("%d is an even number",num) ;
    else
        printf("%d is an odd number",num) ;
    return 0;
}
*/

// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
/*
#include<stdio.h>
int main()
{
    int x ;
    printf("Enter a number: ") ;
    scanf("%d",&x) ;
    int a = 2*(x/2) ;
    if(x-a == 0)
        printf("%d is even",x);
    else
        printf("%d is odd",x) ;

    return 0;
}
*/

// 5. Write a program to check whether a given number is a three-digit number or not.
/*
#include<stdio.h>
int main()
{
    int x ;
    printf("Enter a three digit number: ") ;
    scanf("%d",&x) ;
    
    if(x/10 != 0)
    {
        x = x/10 ;

        if(x/10 != 0)
        {
            x = x/10 ;

            if(x/10 == 0)
            {
                printf("yes it is a three digit number") ;
            }
            else
                printf("No it is not a three digit number") ;
        }
        else
            printf("No it is not a three digit number") ;
    }
    else 
        printf("No it is not a three digit number") ;

    return 0;
}
*/

// 6. Write a program to print greater between two numbers. Print one number of both are the same.
/*
#include<stdio.h>
int main()
{
    int a,b ;
    printf("Enter two number: ") ;
    scanf("%d %d",&a,&b) ;

    if(a<b)
        printf("%d is greater than %d",b,a) ;
    else
        if(a==b)
            printf("%d and %d both are same",a,b) ;
        else
            printf("%d is greater than %d",a,b) ;
    return 0;
}
*/

// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
/*
#include<stdio.h>
int main()
{
    int a,b,c ;
    printf("Enter the value of a , b , c") ;
    scanf("%d %d %d",&a,&b,&c) ;

    int Root = (b*b)-(4*a*c) ;
    
    if(Root>0)
        printf("Quadratic equation has real & distinct root") ;
    else if(Root==0)
        printf("Quadratic equation has real & equal root") ;
    else if(Root<0)
        printf("Quadratic equation has imaginary root") ;

    return 0;
}
*/

// 8. Write a program to check whether a given year is a leap year or not.
/*
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 100 == 0) 
   {
      if(year%400 == 0)
        printf("%d is a leap year.", year);
      else
        printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   else 
   {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
*/

// 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
/*
#include<stdio.h>
int main()
{
    int num1,num2,num3 ;
    printf("Enter three numbers\n") ;
    printf("number 1 = ") ;
    scanf("%d",&num1) ;
    printf("number 2 = ") ;
    scanf("%d",&num2) ;
    printf("number 3 = ") ;
    scanf("%d",&num3) ;

    if(num1>num2) 
    {
        if(num1>num3)
            printf("Greatest number is %d",num1) ;
        else if(num1 == num3)
            printf("Greatest number is %d",num1) ;
        else 
            printf("Greatest number is %d",num3) ;
    }
    else
    {
        if (num2>num3)
            printf("Greatest number is %d",num2) ;
        else if (num2 == num3)
            printf("Greatest number is %d",num2) ;
        else
            printf("Greatest number is %d",num3) ;      
    }
    return 0;
}
*/
// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage. 
/*
#include<stdio.h>
int main()
{
    int cp,sp ;
    printf("Enter the cost price of the product: ") ;
    scanf("%d",&cp) ;
    printf("Enter the selling price of the product: ") ;
    scanf("%d",&sp) ;
    int profit = sp - cp ;
    int profit_percent = (profit*100)/cp ;
    int loss = cp-sp ;
    int loss_percent = (loss*100)/cp ;

    printf("Profit percentage is %d",profit_percent) ;
    printf("\nLoss percentage is %d",loss_percent) ;

    return 0;
}
*/
// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
/*
#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5 ;
    printf("Enter the marks of your subjects: ") ;
    printf("\n subject 1 = ") ;
    scanf("%d",&sub1) ;
    printf("\n subject 2 = ") ;
    scanf("%d",&sub2) ;
    printf("\n subject 3 = ") ;
    scanf("%d",&sub3) ;
    printf("\n subject 4 = ") ;
    scanf("%d",&sub4) ;
    printf("\n subject 5 = ") ;
    scanf("%d",&sub5) ;

    if(sub1<33 && sub2<33 && sub3<33 && sub4<33 && sub5<33)
    {
        printf("failed") ;
    }
    else
    {
        printf("passed") ;
    }    
    
    return 0;
}
*/

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
/*
#include<stdio.h>
int main()
{
    char character ;
    printf("Enter an Alphabet : ") ;
    scanf("%c",&character) ;
    if(character<='z' && character>='a')
        printf("%c is in lower case",character) ;
    else if(character<='Z' && character>='A')
        printf("%c is in upper case",character) ;

    return 0;
}
*/

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
/*
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ") ;
    scanf("%d",&num) ;

    if(num%2 == 0 && num%3 == 0)
        printf("%d is divisible by 3 and 2",num) ;
    else
        printf("%d is not divisible by 3 and 2",num) ;
    return 0;
}
*/

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
/*
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ") ;
    scanf("%d",&num) ;

    if(num%3 == 0)
        printf("%d is divisible by 3",num) ;
    else if(num%7 == 0)
        printf("%d is divisible by 7",num) ;
    else
        printf("%d is not divisible by 7 or 3",num) ;
    return 0;
}
*/

// 15. Write a program to check whether a given number is positive, negative or zero.
/*
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number: ") ;
    scanf("%d",&num) ;

    if(num<0)
        printf("%d is negative",num) ;
    else if(num == 0)
        printf("%d is zero",num) ;
    else 
        printf("%d is positive",num) ;
    return 0;
}
*/

// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
/*
#include<stdio.h>
int main()
{
    char Character ;
    printf("Enter a Character to check: ") ;
    scanf("%c",&Character) ;

    // printf("%d",(int)Character) ;
    if((int)Character>=32 && (int)Character<=47)
        printf("%c is special character",Character) ;
    else if((int)Character>=48 && (int)Character<=57)
        printf("%c is a digit",Character) ;
    else if((int)Character>=65 && (int)Character<=90)
        printf("%c is uppercase Alphabet",Character) ;
    else if((int)Character>=97 && (int)Character<=122)
        printf("%c is a lowercase alphabet",Character) ;
    return 0;
}
*/

// 17. Write a program which takes the length of the sides of a triangle as an input. Display, whether the triangle is valid or not.
/*
#include<stdio.h>
int main()
{
    int a,b,c ;
    printf("Enter the length of the sides of a triangle: ") ;
    printf("\n side a = ") ;
    scanf("%d",&a) ;
    printf("\n side b = ") ;
    scanf("%d",&b) ;
    printf("\n side c = ") ;
    scanf("%d",&c) ;

    if(a+b>c || a+c>b || b+c>a)
        printf("This is a triangle") ;
    else
        printf("This is not a triangle") ;

    return 0;
}
*/

// 18. Write a program which takes the month number as an input and display number of
// days in that month
/*
#include<stdio.h>
int main()
{
    int month_num ;
    printf("Enter the month number: ") ;
    scanf("%d",&month_num) ;

    if (month_num == 1)
    {
        printf("31 days") ;
    }
    else if (month_num == 2)
    {
        printf("28 days") ;
    }
    else if (month_num == 3)
    {
        printf("31 days") ;
    }
    else if (month_num == 4)
    {
        printf("30 days") ;
    }
    else if (month_num == 5)
    {
        printf("31 days") ;
    }
    else if (month_num == 6)
    {
        printf("30 days") ;
    }
    else if (month_num == 7)
    {
        printf("31 days") ;
    }
    else if (month_num == 8)
    {
        printf("31 days") ;
    }
    else if (month_num == 9)
    {
        printf("30 days") ;
    }
    else if (month_num == 10)
    {
        printf("31 days") ;
    }
    else if (month_num == 11)
    {
        printf("30 days") ;
    }
    else if (month_num == 12)
    {
        printf("31 days") ;
    }
    else 
    {
        printf("Invalid Month number") ;
    }

    
    return 0;
}
*/