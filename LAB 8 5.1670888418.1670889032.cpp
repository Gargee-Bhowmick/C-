#include <iostream>
#include <string.h>
using namespace std;
class Account
{
    protected:
        long int account_number;
        string customer_name; 
        double balance;
    public:
        Account(long int an , string cn , double b)
		{
        	account_number = an;
        	customer_name = cn;
        	balance = b;
        }
        void deposit()
        {
            int amount;
            cout<<"\nEnter amount to deposit: ";
            cin>>amount;
            balance=balance+amount;
        }
        
};
class Savings: public Account
{
    private:
        double min_balance;
    public:    
        Savings(int i , string cn , long int an , double b) : Account (an , cn , b)
		{
        	min_balance = i;
        }
        
        void withdraw()
        {
        	deposit();
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount<min_balance)
                cout<<"The minimum amount that can be withdrawn is "<<min_balance;
                
            else
            {
                balance=balance-amount;
            }
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
    
};
class Current: public Account
{
    private:
        double over_due_amount;
    public:    
        Current(int i , string cn , long int an , double b) : Account (an , cn , b)
		{
        	over_due_amount=i;
        }
    
    void withdraw()
    {
	    	deposit();
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount>over_due_amount)
                cout<<"\nThe maximum amount that can be withdrawn is "<<over_due_amount;
                
            else
                balance=balance-amount;
        }
        void display()
		{
            cout<<"\nBalance= "<<balance;
        }
         
};
int main()
{
    int c ;
	long int an ;
    double b;
    string cn;
    cout<<"1. Savings\n2. Current\nEnter your choice:";
    cin>>c;
    cout<<"Enter the account number : ";
    cin >> an;
    cout<<"Enter the customer name : ";
    fflush(stdin);
    getline(cin,cn);
    cout<<"Enter the balance : ";
    cin >> b;
    if (c==1)
	{
        Savings s(500 , cn , an , b);
        s.withdraw();
        s.display();
    }
    if (c==2)
	{
        Current c(50000 , cn , an , b);
        c.withdraw(); 
        c.display();
    }
    return 0;
}
