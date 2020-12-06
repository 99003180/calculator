#include<calculator.h>

void add()
{
    int n, number;
    double total=0;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
   for(int i=0;i<n;i++)
   {
        scanf("%d",&number);
        total=total+number;

   }
    printf("Sum of %d numbers = %lf \n",n,total);
}

void sub()
{
    int a,b,c;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d - %d = %d\n", a, b, c);
}
double mult(int operand1, int operand2)
{
    return operand1*operand2;
}

void div()
{
    int numer,denom, q=0;
    printf("\nPlease enter numerator : ");
    scanf("%d",&numer);
    printf("\nPlease enter denominator : ");
    scanf("%d",&denom);
    if(denom==0)
    {
        printf("Divide by 0 Error\n");
    }
    else
    {
        q = numer/denom;
        printf("\nDivision of entered numbers = %d\n",q);
    }
}

void rev()
{
    int num, total=0,r=0;
    printf("Enter the number to be reversed\n");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        r=num%10;
        total=total*10+r;
        num=num/10;
    }
    printf("Reverse of %d is %d ",temp,total);
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

