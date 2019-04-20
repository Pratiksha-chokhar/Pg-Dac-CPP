//program to fibonacci series
//pratiksha chokhar


#include <stdio.h>
 
int main()
{
  int n,a = 0, b= 1, temp, i;
 
  printf("Enter the number of terms\n");
  scanf("%d", &n);
 
  printf("First %d terms of Fibonacci series are:\n", n);
 
  for (i= 0; i < n; i++)
  {
    if (i <= 1)
   temp = i;
    else
    {
      temp = a + b;
      a = b;
      b = temp;
    }
    printf("%d\n", temp);
  }
 
  return 0;
}
