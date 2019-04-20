//factorial pattern of 3 no.
//pratiksha chokhar

#include <stdio.h>
 
int main()
{
  int i, n, num = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
 
  for (i = 1; i<= n; i++)
   num = num * i;
 
  printf("Factorial of %d = %d\n", n, num);
 
  return 0;
}
