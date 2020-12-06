#include<calculator.h>
#include <stdio.h>
#include<math.h>
//#include <stdlib.h>

int main()
{
    int ch;
    printf("Enter your choice\n");
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Reverse\n 6.Decimal to Binary\n 7.Matrix Addition\n 8.Inverse\n 9.Square Root");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: add();
                break;
        case 2: sub();
                break;
        case 3: mult();
                break;
        case 4: div();
                break;
        case 5: rev();
                break;
        case 6: DecToBin();
                break;
        case 7: matrix_sum();
                break;
        case 8: inv();
                break;
        case 9 :square();
                break;
    }
    return 0;
}
