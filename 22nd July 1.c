#include <stdio.h>
int main()
{
	struct student{
	char s[100];
	unsigned long int roll_number;
	int arr[5];	
	};
	int i;
	 struct student std;
	printf("Enter the name of the student\n");
	scanf("%[^\n]s",std.s);
	printf("Enter the roll number\n");
	scanf("%u",&std.roll_number);
	printf("Enter the student's marks in five subjects respectively\n");
	for(i=0;i<5;i++)
	scanf("%d",&std.arr[i]);
	printf("Name: %s\n",std.s);
	printf("Roll number: %u\n",std.roll_number);
	printf("Marks :");
	for(i=0;i<5;i++)
	printf(" %d",std.arr[i]);
	return 0;
}
