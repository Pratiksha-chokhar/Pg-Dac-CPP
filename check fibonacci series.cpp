//program for to check given no is fibonacci or not
//pratiksha chokhar

#include <stdio.h>
  int main()
   {
        int num, a = 0, b = 1, temp, c = 0;

        printf("Enter ur input:");
        scanf("%d", &num);
        
        if (num == a || num == b) 
		{
                printf("%d is a fibonacci number\n", num);
                return 0;
        }

        while (b <= num) {
                temp = b;
               b= a + b;
                a = temp;
                if (b == num) {
                        c = 1;
                        break;
                }
        }

        if (c)
		{
		
                printf("%d is a fibonacci number\n", num);
        } else
		 {
                printf("%d is not a fibonacci number\n", num);
        }
        return 0;
  }
