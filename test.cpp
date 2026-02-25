#include<iostream>
#include<string>
using namespace std;

class Account
{
	protected:		
    	int accId;
    	string accHolder;
    	float balance;
    	
    public:
    	Account()
    	{
    		this->accId=accId;
		}
		
		Account(int accId, string accHolder, float balance)
		{
			this->accId=accId;
			this->accHolder;
			this->balance=balance;
		}
		
	virtual void accept()
	{
		cout<<"Enter account ID :";
		cin>>accId;
		cout<<"Enter account Holder :";
		cin>>accHolder;
		cout<<"Enter Balance :";
		cin>>balance;
	}
	
	virtual void display()
   {
	    cout<<"---Account Details---";
       	cout<<"Account ID :"<<accId<<endl;
    	cout<<"Account Holder :"<<accHolder<<endl;
	    cout<<"Balance :"<<balance<<endl;
 	
   }
   
   
   void calculateInterest()
   {
	
   }


    	
};


class SavingsAccount()
{
	protected:
		float interestRate;
		
	public:
		SavingsAccount()
		{
			this->interestRate=interestRate;
		}
		
		
		
		
};

class CurrentAccount()
{
	protected:
		float serviceCharge;
		
	public:
		CurrentAccount
		{
			this->serviceCharge=serviceCharge;
		}
};

int main()
{
	SavingsAccount s;
	
	CurrentAccount c;
	
	Account* ptr;
	
	int choice;
	
	do{
		cout<"---Menu---"<<endl;
		cout<<"1.Enter Savings Account Details :\n"<<endl;
		cout<<"2.Enter Current Account Details :\n"<<endl;
		cout<<"3.Display Savings Account using base-class pointer :\n"<<endl;
		cout<<"4.Display Current Account using base-class pointer :\n"<<endl;
		cout<<"5.Exit\n"<<endl;
		cout<<"Enter choice :\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				s.accept()
				break;
				
			case 2:
				s.display()
				break;
				
			case 3:
				s.calculateInterest()
				break;
				
			
		}
	}while(choice!=0);
	
	return 0;
	
}















