 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct employee{
	int id;
	char name[40];
	int age;
	float basic_salary;
}emp;
int main()
{
	int n,i;
	printf("Enter the number of employees whose information is to be displayed\n");
	scanf("%d",&n);
	emp em[n];
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter the id of employee %d\n",i+1);
		scanf("%d",&em[i].id);
		printf("\nEnter the name\n");
		fflush(stdin);
		scanf("%[^\n]s",em[i].name);
		printf("\nEnter age\n");
		scanf("%d",&em[i].age);
		printf("\nEnter the basic salary\n");
		scanf("%f",&em[i].basic_salary);
	}
    printf("\n\n\nThe details of the employees are as follows:\n\n");
    printf ("\tID\t\tName\t\t\tAge\t\tBasic Salary\t\tGross Salary\n");
    for(i=0;i<n;i++)
    {
    	printf("%d)\t%d\t\t%s\t\t%d\t\t%f\t\t%f\n",i+1,em[i].id,em[i].name,em[i].age,em[i].basic_salary,em[i].basic_salary+(0.80*em[i].basic_salary)+(0.10*em[i].basic_salary));
	}
	return 0;
}
