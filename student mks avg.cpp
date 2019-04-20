//program for percentage and aggregate of marks
//pratiksha chokhar
#include<stdio.h>
#include<math.h>
int main ()
{
	int eng,hindi,bio,chem,eco, Aggregate;
	int Total;
	float percentage, a;
	printf("Enter the marks of student\n");
	scanf("%d%d%d%d%d", &eng, &hindi, &bio, &chem, &eco);
	Total= (eng+hindi+bio+chem+eco);
	Aggregate=(Total/5);
	printf("Aggregate is %d\n", Aggregate);
    a=Total *100;
    percentage=a/500;
	
	printf("percentage is :%f", percentage);
	
	
}
