#include<stdio.h>
int main(){

    printf("<<< _WELCOME_ >>>\nCheck the triangle is valid or not\n");
    
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
    
    
    

return 0;
}