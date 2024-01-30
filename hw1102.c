#include<stdio.h>
int main(){

//prob-1: Fahrenheit to celsius//
    float f,c;
    printf("Enter the Fahrenheit value:");
    scanf(" %f", &f);
    
    c=(f-32) * 5/9; 

    printf(" %.3f Fahrenheit = %.3f Celsius", f, c);

//prob-2: Calculate area of a circle
    float area, r;
    printf("Enter the radious of circle:");
    scanf("%f",&r);

    area= 3.1416 * r * r;

    printf("The area is= %.2f", area);
    


//prob-3: Convert days to years, months and weeks
    float yr, day, week, mnth;
    printf("Enter the days(number):");
    scanf(" %f", &day);

    yr = day/365;
    mnth = day/30;
    week = day/7;

    printf(" %.f Days = %.1f Years, %.1f months, %.1f weeks", day, yr, mnth, week);


//prob-4(Lab): Write a C program to determine the largest from three numbers.
    int n1,n2,n3;
    printf("Enter three numbers:");
    scanf(" %d %d %d", &n1, &n2, &n3);

    if (n1>n2 && n1>n3)
    {
        printf("%d is the largest\n", n1);
    }else if (n2>n1 && n2>n3)
    {
        printf("%d is the largest\n", n2);
    }else if (n3>n1 && n3>n2)
    {
        printf("%d is the largest\n", n3);
    }else
    {
        printf("All are equal");
    }



/*prob-5(Lab): 
Write a C program to swap two number using temporary variable, 
addition and subtraction, bitwise XOR, without a temporary variable.*/

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //Using temporary variables..........
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Swapped numbers are: %d %d\n", num1, num2);

    //Using addition and subtraction...........
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Swapped: %d %d\n", num1, num2);

    //Using bitwise XOR...........
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("Swapped: %d %d\n", num1, num2);

    //Without a temporary variable..............
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Swapped: %d %d\n", num1, num2);




return 0;
}