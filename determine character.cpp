//program for the to determine whether entered character is capital, small or symbol
//Pratiksha Chokhar.
#include<stdio.h>
int main()
{
	char input;
	printf("Enter the Input\n");
	scanf("%c", &input);
	printf("%d",input);
	if(input>=65 && input<=90)
	{
		printf("This is a capital letter !!\n");	   
	}
	else if(input>=97 && input<=122)
	{
		printf("This is a small character!!\n");
	}
    else if(input>=48 && input<=57)
	{
	printf("This is a digit!!\n");
    }
	else
	{
			printf("It is special symbol!!!\n");
	}


	return 0;
}
