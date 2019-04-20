//program to test given no is armstrong or not
//pratiksha chokhar

#include <stdio.h>
int main() 
{
    int num, a, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &num);

   a = num;

    while (num != 0)
    {
        remainder = num%10;
        result =result+ remainder*remainder*remainder;
        num =num/ 10;
    }

    if(result == a)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);

    return 0;
}
