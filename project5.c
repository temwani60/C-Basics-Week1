#include<stdio.h>
int main()
{
	float x,y;
	char ch;
	printf("Enter first number\n");
	scanf("%f",&x);
	printf("Enter second number\n");
	scanf("%f",&y);
	printf("enter\n+ for add\n- for sub\n * for multiplication\n / for divide\n");
	scanf("\n%c", &ch);
	switch(ch)
{
	case '+':
	printf("Add=%f",(x+y));
	break;
	case '-':
	printf("Sub=%f", (x-y));
	break;
	case '*':
	printf("Multiply=%f", (x*y));
	break;
	case '/':
	printf("divide=%f", (x/y));
	break;
	default:
	printf("invalid input");
}
return 0;
}
