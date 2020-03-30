using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
	int i,n,n1=0,c,ex=0;
	cout<<"Enter Number chair in waiting room: ";
	cin>>n;
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		arr[i]=0;
	}
	
	while(true)
	{
		
		cout<<"\n\nEnter Number of customer: ";
		cin>>c;
		n1+=c;
		
		system("CLS");
		
		
		if(n1!=0)
		{
			--n1;
			cout<<"\nNew Customer: "<<c<<"\n";
			cout<<"\nBarber is busy with 1 customer \n";
			cout<<"\n\t\tBarber Chair\tOccupied \n";
			
		}
		else
		{
			cout<<"\nNo New Customer "<<"\n";
			cout<<"\nBarber is sleeping now \n\n";
			cout<<"\t\tBarber Chair\tEmpty \n";
		}	
		
		if(n1>n)
		{
			ex=n1;
			n1=n;
		}
			
		for(i=0;i<n1;i++)
		{
			arr[i]=1;
		}
		
		for(i=0;i<n;i++)
		{
			if(arr[i]==1)
				cout<<"\n\t\tWaiting Chair-"<<i+1<<"\t"<<"Occupied";
			else
				cout<<"\n\t\tWaiting Chair-"<<i+1<<"\t"<<"Empty";
		}
		
		cout<<"\n\nCustomer in waiting: "<<n1<<"\n";
		
		if(arr[n-1]==1)
		{
			cout<<"\nWaiting room is full";
			if(ex!=0)
			{
				cout<<"\n\nRest of the "<<ex-n<<" customer left ";
			}
		}
		
		cout<<"\n\nPress 1 to continue and 0 to exit: ";
		cin>>c;
		if(c==0)
		{
			break;
		}
		
		cout<<"\n1 customer left\n";
		ex=0;
		for(i=0;i<n;i++)
		{
			arr[i]=0;
		}
		
	}
	
	return 0;
	
}
