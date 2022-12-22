#include <stdio.h>
struct Product
{
	int p_no;
	char p_name[40];
	float price;
	int quantity;
	int total_price;
}p;
void input()
{
	printf("Enter the product number: ");
	scanf("%d",&p.p_no);
	printf("Enter the product's name\n");
	fflush(stdin);
	scanf("%[^\n]s",p.p_name);
	printf("Enter the price of the product\n");
	scanf("%f",&p.price);
	printf("Enter the product quantity\n");
	scanf("%d",&p.quantity);
	p.total_price = p.price * p.quantity;
	display(p);
}
void display(struct Product p)
{
	printf("The details are as follows: \n");
	printf("Product number\t\t\t%d\n",p.p_no);
	printf("Product name\t\t\t%s\n",p.p_name);
	printf("Price\t\t\t\tRs.%f\n",p.price);
	printf("Quantity\t\t\t%d\n",p.quantity);
	printf("Total price\t\t\tRs.%f\n",p.price*p.quantity);
}
int main()
{
	input();
}
