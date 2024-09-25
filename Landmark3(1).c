/*Landmark#3
Develop program a Calculator:
1. Read Character (+ , -  ,  *  ,  / ,  %).
2.Read any two numbers from user as input.
3 Use “Switch Case” to calculate and print Result
*/
#include <stdio.h>
int main()
{
    char ch;
    int num1,num2;
    printf("\nEnter Symbol to Operate(+ , -  ,  *  ,  / ,  %%):\t");
    scanf("%c",&ch);
    switch (ch) 
    {
        case '+':
        printf("\nEnter 1st number:\t");
        scanf("%d",&num1);
        printf("\nEnter 2nd number:\t");
        scanf("%d",&num2);
        printf("\n%d + %d = %d\n",num1,num2,num1+num2);
        break;
        case '-':
        printf("\nEnter 1st number:\t");
        scanf("%d",&num1);
        printf("\nEnter 2nd number:\t");
        scanf("%d",&num2);
        printf("\n%d - %d = %d\n",num1,num2,num1-num2);
        break;
        case '*':
        printf("\nEnter 1st number:\t");
        scanf("%d",&num1);
        printf("\nEnter 2nd number:\t");
        scanf("%d",&num2);
        printf("\n%d * %d = %d\n",num1,num2,num1*num2);
        break;
        case '/':
        printf("\nEnter 1st number:\t");
        scanf("%d",&num1);
        printf("\nEnter 2nd number:\t");
        scanf("%d",&num2);
        if(num2>0)
        {
            printf("\n%d * %d = %d\n",num1,num2,num1/num2);
        }
        else 
        {
            printf("\nNum 2 must be greater than zero\n");
        }
        break;
        case '%':
        printf("\nEnter 1st number:\t");
        scanf("%d",&num1);
        printf("\nEnter 2nd number:\t");
        scanf("%d",&num2);
        if(num2>0)
        {
            printf("\n%d * %d = %d\n",num1,num2,num1%num2);
        }
        else 
        {
            printf("\nNum 2 must be greater than zero\n");
        }
        break;
        default:
        printf("\nThis is not a choice\n");
    }
}