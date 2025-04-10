#include<iostream>
using namespace std;

class bank
{
	public:
		char name[20], acc_type[20];
		int acc, i_amt;
		
	bank()
	{
		cout<<"Name of account holder: ";
		cin>>name;
		cout<<"Account number: ";
		cin>>acc;
		cout<<"Account type: ";
		cin>>acc_type;
		cout<<"Initial balance: $";
		cin>>i_amt;
	}
	
	void deposit(int a, int dep)
	{	
		if(a==acc){
		cout<<"Account number: "<<acc<<endl;
		cout<<"Amount to be deposited: "<<dep<<endl;
		i_amt+=dep;}
		
	}
	
	void withdraw(int a, int wit)
	{
		if(a==acc){
		cout<<"Account number: "<<acc<<endl;
		
		if(wit<i_amt){
			i_amt-=wit;
			cout<<"Amount to be withdrawn: "<<wit<<endl;
		}
		else if(wit>i_amt){
			cout<<"Insuficient balance"<<endl;
		}}
		
	}
	
	void check(int a)
	{
		if(a==acc){
		cout<<"Account number: "<<acc<<endl;
		cout<<"Balance: $"<<i_amt<<endl;
		}
	
	}
};

int main()
{
	int i, n, k,a,b;
	cout<<"Enter number of Account holders: ";
	cin>>n;
	bank bn[n];

	while(1)
	{
	cout<<"\n1. Deposit amount\n2. Withdraw amount\n3. Check balance\n4. EXIT\n\nSelect an option: ";
	cin>>k;
	
	switch(k)
	{
		case 1:
		
			cout<<"Enter account number and amount to deposit: ";
			cin>>a>>b;
			for(i=0; i<n; i++)
			{
				bn[i].deposit(a,b);
			}
			break;
			
		case 2:
			cout<<"Enter account number and amount to withdraw: ";
			cin>>a>>b;
			for(i=0; i<n; i++)
			{
				bn[i].withdraw(a,b);
			}
			break;
			
		case 3:
			cout<<"Enter account number: ";
			cin>>a;
			for(i=0; i<n; i++)
			{
				bn[i].check(a);
			}
			break;
			
		case 4:
		    cout<<"GoodBye...";
		    exit(0);
		    break;
		default:
			cout<<"Invalid option."<<endl;
	}
	}
}
