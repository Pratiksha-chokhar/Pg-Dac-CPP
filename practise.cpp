

/*int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}*/
#include <stdio.h>

/*int main(void) {
  char name[] = "Harry Potter";

  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o
}
*/
int main()
{
	

/*int i,j,s,n;
printf("enter the level of pattern:");
scanf("%d",&n);
s=n;
for(i=1;i<=n;i++)
{
	for(j=1;j<s;j++)
	
		printf(" ");
		s--;
		
	

for(j=1;j<2*i-1;j++)

	printf("*");
	printf("\n");
	
}*/

  int row, c, n, s;
 
  printf("Enter the number of rows in pyramid of stars you wish to see\n");
  scanf("%d", &n);
 
  s = n;
 
  for (row = 1; row <= n; row++)  // Loop to print rows
  {
    for (c = 1; c < s; c++)  // Loop to print spaces in a row
      printf(" ");
 
    s--;
 
    for (c = 1; c <= 2*row - 1; c++) // Loop to print stars in a row
      printf("*");
 
    printf("\n");
  }
 
  return 0;



}
