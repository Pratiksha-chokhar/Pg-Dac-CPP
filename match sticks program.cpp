//assignment for match chex game
//pratiksha chokhar
#include<stdio.h>
int main()
{

int i,n,j=21, ans=0;
printf("enter the user match sticks");
scanf("%d", &n);
if(n>4||n==0)
{
	printf("In valid no\n");
}
for(i=0;i<5;i++)
{
	if(n==4||n==3||n==2||n==1)
	{
		ans=5-n;
	}
	printf("%d you entered\n", n);
	printf("%d computer entered\n", ans);
	j=j-5;

printf("%d Remaining stick\n", i);
}
//else
	printf("you lost\n");

}


