#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("%c]0;%s%c", '\033', "calculator", '\007');
start:
{
    system("cls");
    printf("Calculator\n\n");
    float num1, num2, result;
    char op;
    printf("enter a first number: ");
    scanf("%f", &num1);
    printf("enter a opperater: ");
    scanf(" %c", &op);
    printf("enter a second number: ");

    scanf("%f", &num2);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%.4f", result);

        break;
    case '-':
        result = num1 - num2;
        printf("%.4f", result);
        break;
    case '/':
        result = num1 / num2;
        printf("%.4f", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.4f", result);
        break;
    case '%':
        result = (num1 / num2) * 100;
        printf("%.4f", result);
        break;
    default:
        printf("syntex error!!!");
        break;
    }
    printf("\n");
    system("pause");
    {
        goto start;
    }
}
    return 0;
}
