#include<stdio.h>

int main()

{

    float a,b;
    char x;

    printf("Enter operator either + or - or * or / :");
    scanf("%c" , &x);


    printf("\nEnter two operands:");
    scanf("%f %f" , &a,&b);


   if(x == '+')
    {
        printf("Result: %.2f", a+b);
    }
   else if(x == '-')
    {
       printf("Result: %.2f", a-b);
    }
   else if(x == '*')
    {
        printf("Result: %.2f", a*b);
    }
    else if(x == '/')
    {
        printf("Result: %.2f", a/b);
    }
   else
    {
       printf("ERROR!! \nWRONG OPERATOR!!");
    }

    return 0;

}


