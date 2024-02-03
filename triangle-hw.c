#include<stdio.h>
int main(){

    printf("<<< _WELCOME_ >>>\nCheck the triangle is valid or not\n");

    //Check triangle valid or not..........

    float a,b,c,sum;
    printf("Enter first angle: ");
    scanf(" %f", &a);

    printf("Enter second angle: ");
    scanf(" %f", &b);

    printf("Enter trird angle: ");
    scanf(" %f", &c);

    sum = a + b + c;

    if (sum==180 && a!=0 && b!=0 && c!=0)
    {
        printf("Congratulation! Triangle is valid\n");
    }else if (a <= 0)
    {
        printf("ERROR: First angle(%.2f) is invalid, angle must be greater than 0 \n", a);
    }else if (b <= 0)
    {
        printf("ERROR: Second angle(%.2f) is invalid, angle must be greater than 0 \n", b);
    }else if (c <= 0)
    {
        printf("ERROR: Third angle(%.2f) is invalid, angle must be greater than 0 \n", c);
    }






//check number divisible by 7 and 12 or not.........
    int x;
    printf("Enter number to check divisible by 7 & 12: ");
    scanf(" %d",&x);

    if (x % 7 == 0 && x % 12 == 0)
    {
        printf("%d is divisible!", x);
    }
    else{
        printf("%d is not divisible", x);
    }
    





//Check character uppercase or lowercase.......
    char chr;
    printf("Enter the character to check capital or small:");
    scanf(" %c", &chr);

    if (chr >= 'A' && chr <= 'Z')
    {
        printf(" %c is Capital!", chr);
    }
    else if (chr >= 'a' && chr <= 'z' )
    {
        printf(" %c is Small!", chr);
    }
    else
    {
        printf(" %c is invalid character \n", chr);
    }
    
    
    

return 0;
}