#include<calculator.h>
#include <stdio.h>
#include<math.h>
//#include <stdlib.h>

int main()
{
    int ch;
    int a,b;
	
    printf("Enter your choice\n");
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Reverse\n 6.Decimal to Binary\n 7.Matrix Addition\n 8.Factorial\n 9.Square Root");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\nPlease enter first numb   : ");
		scanf("%d", &a);
		printf("Please enter second number: ");
		scanf("%d", &b);
		double total1=add(a,b);
		printf("Addition is %lf",total1); 
                break;
        case 2: printf("\nPlease enter first numb   : ");
		scanf("%d", &a);
		printf("Please enter second number: ");
		scanf("%d", &b);
		int total=sub(a,b);
		printf("Sub is %d",total); 
                break;
        case 3: printf("\nPlease enter first numb   : ");
		scanf("%d", &a);
		printf("Please enter second number: ");
		scanf("%d", &b);
		double total2=mult(a,b);
		printf("Mult is %lf",total2); 
                break;
        case 4: printf("\nPlease enter first numb   : ");
		scanf("%d", &a);
		printf("Please enter second number: ");
		scanf("%d", &b);
		int total3=div(a,b);
		printf("Div is %d",total3);
                break;
        case 5: printf("Enter no. to be reversed\n");
		scanf("%d",&a);
		int res=rev(a);
		printf("Reverse of num is %d",res);
                break;
        case 6: DecToBin();
                break;
        case 7: matrix_sum();
                break;
        case 8: printf("Enter the number\n");
		scanf("%d",&a);
		int res1=fact(a);
		printf("Factorial is %d",res1);
                break;
        /*case 9 :square();
                break;
                */
    }
   // return 0;
}
