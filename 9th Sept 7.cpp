#include <iostream>
#include <string.h>
using namespace std;
class Account
{
    protected:
        int account_number;
        string customer_name; 
        double balance;
    public:
        void deposit(){
        	balance = 0.0;
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
        void withdraw(){
        	min_balance = 500;
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
        void withdraw(){
        	over_due_amount=500000;
        	deposit();
            int amount;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount;
            if (amount>over_due_amount)
                cout<<"\nThe maximum amount that can be withdrawn is "<<over_due_amount;
                
            else
                balance=balance-amount;
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
        
};
int main()
{
    int c;
    cout<<"1. Savings\n2. Current\nEnter your choice:";
    cin>>c;
    if (c==1)
	{
        Savings s;
        s.withdraw();
        s.display();
    }
    if (c==2)
	{
        Current c;
        c.withdraw(); 
        c.display();
    }
    return 0;
}
