// Sample

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x + 10;

    printf("Result = %d", y);

    return 0;
}

//

// PROGRAM 1: Add 2
#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x + 2;

    printf("Result = %d", y);

    return 0;
}

// PROGRAM 2: Subtract 5
#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x - 5;

    printf("Result = %d", y);

    return 0;
}
//

// Program 3:Multiply a Number by 3

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x * 3;

    printf("Result = %d", y);

    return 0;
}
//
// Program 4:Divide a Number by 6

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x / 6;

    printf("Result = %d", y);

    return 0;
}
//
// Program 5:Find Remainder when Divided by 8

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x % 8;

    printf("Result = %d", y);

    return 0;
}
//
// Program 6: Find Remainder for two digit

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x % 10;

    printf("Result = %d", y);

    return 0;
}
//
// Program 7:Extract the first digit of a two-digit number

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x / 10;

    printf("Result = %d", y);

    return 0;
}
//
// Program 8: Get a three-digit number from the user and print the 1's digit (unit digit)

#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter Number : ");
    scanf("%d",&x);

    y = x % 10;

    printf("Result = %d",y);

    return 0;
}
//
// Program 9:Extract the hundreds digit of a three-digit number

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = x / 100;

    printf("Result = %d", y);

   return 0;
}
//
// Program 10: Extract tens digit of a three-digit number

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d", &x);

    y = (x / 10) % 10;

    printf("Result = %d", y);

    return 0;
}
//
// Program 11:Sum of Digits of a 3-Digit Number

#include <stdio.h>

int main()
{
    int x, a, b, c, sum;

    printf("Enter Number: ");
    scanf("%d", &x);

    a = x / 100;
    b = (x / 10) % 10;
    c = x % 10;

    sum = a + b + c;

    printf("Result = %d", sum);

    return 0;
}
//

// Program 12: Get a two-digit number from the user and print its reverse
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x % 10) * 10 + (x / 10);

    printf("Result = %d", y);

    return 0;
}
//
// Program 13: Get a Three-digit number from the user and print its reverse
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number : ");
    scanf("%d",&x);

    y = (x % 10) * 100 + ((x / 10) % 10) * 10 + (x / 100);

    printf("Result = %d", y);

    return 0;
}
//

// Program 14:Get a 4-digit number and reverse only the last two digits.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number : ");
    scanf("%d",&x);

    y = (x / 100) * 100 + (x % 10) * 10 + ((x / 10) % 10);

    printf("Result = %d", y);

    return 0;
}
//
//Program 15:Get a two-digit number from the user, make the one's digit 0, then print it.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x / 10) * 10;

    printf("Result = %d", y);

    return 0;
}
//
//Program 16:Get a two-digit number from the user, make the ten's digit 1,then print it.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = 10 + (x % 10);

    printf("Result = %d", y);

    return 0;
}
//
//Program 17:Get a 3-digit number and make the one's digit 2, then print it.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x / 10) * 10 + 2;

    printf("Result = %d", y);

    return 0;
}
//
//Program 18: Get a number from the user and subtract 5 from that number if the number is odd. Do not use if.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = x - (x % 2) * 5;

    printf("Result = %d", y);

    return 0;
}
//
//Program 19:Get number from the user and subtract 5 from that number if the number's ten's digit is odd. Do not use if.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = x - ((((x / 10) % 10) % 2) * 5);

    printf("Result = %d", y);

    return 0;
}
//
//Program 20:Get a two-digit number from the user and subtract 5 from that number if the sum of the digits is odd, then print the result. Do not use if.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = x - ((((x/10) + (x%10)) % 2) * 5);

    printf("Result = %d", y);

    return 0;
}
//
//

//Program 21:Get a three-digit number and subtract 5 from that number if the one's digit and hundred's digit are odd. Do not use if.
#include<stdio.h>

int main()
{
    int x,y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = x - (((x/100)%2) * ((x%10)%2) * 5);

    printf("Result = %d",y);

    return 0;
}
//
//Program 22:Keep adding digits until a single digit remains
#include<stdio.h>

int main()
{
    int x, y;

    scanf("%d",&x);

    y = x/100 + (x/10)%10 + x%10;

    while(y >= 10)
    {
        y = y/10 + y%10;
    }

    printf("%d", y);

    return 0;
}
//
//Program 23: Get a three-digit number and make the ten's digit 0, then print it.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x / 100) * 100 + (x % 10);

    printf("Result = %d", y);

    return 0;
}
//
//Program 24: Get a 4-digit number and reverse the first two digits.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = ((x/100)%10)*1000 + (x/1000)*100 + (x%100);

    printf("Result = %d", y);

    return 0;
}
//
//Program 25:Get a 2-digit number and print the sum of its digits.
#include<stdio.h>

int main()
{
    int x, y;

    printf("Enter Number: ");
    scanf("%d",&x);

    y = (x / 10) + (x % 10);

    printf("Result = %d", y);

    return 0;
}
//
