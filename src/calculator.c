#include<calculator.h>

double add(int operand1,int operand2)
{
    return operand1+operand2;
}

int sub(int operand1,int operand2)
{
    return operand1-operand2;
}
double mult(int operand1, int operand2)
{
    return operand1*operand2;
}

int div(int operand1,int operand2)
{
    
    if(operand2==0)
    {
        return 0;
    }
    else
    {
        return operand1/operand2;
    }
}

int rev(int num)
{
    int reverse=0,r=0;  
    int temp=num;
    while(num>0)
    {
        r=num%10;
        reverse=reverse*10+r;
        num=num/10;
    }
    return reverse;
}
void DecToBin()
{
    int dec,i;
    printf("Enter the decimal number\n ");
    scanf("%d",&dec);
    int a[10];
    for(i=0;dec>0;i++)
    {
        a[i]=dec%2;
        dec=dec/2;
    }
    printf("\nBinary of given decimal is :\n");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
void matrix_sum()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // adding two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }
}

/*void inv()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    double y;
    y=pow(x,-1);
    printf("Inverse of given value is %lf:",y);
}
*/

/*void square()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    int y=sqrt(x);
    printf("Square root of %d is %d ",x,y);
}
*/

int fact(int num)
{
    if (num<0)
    {
        return -1;
    }   
    if (num == 0)
    {
        return 1;
    }
    return num*fact(num-1);
}

