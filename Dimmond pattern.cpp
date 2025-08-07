#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	int num;
	cout<<endl<<"Enter a odd number ";
	cin>> num;
	if(num%2==0)
	{
		cout<<"Error !! Invalid number "<<endl;
		cout<< "Enter a odd number Again "<<endl;
		cin>> num;
	}
	cout<<"-------------------------------------"<<endl;
	num=(num+1)/2;
    for (int i=1 ; i<=num ;++i)
	{ for (int k=1 ; k<=(num-i);++k)
			{ cout<<" ";}
		for(int j=1; j<=2*i-1 ; ++j)
		{ 
			cout<<"*";
			
		}
	cout<<endl;
	}
	for (int i=num-1 ; i>=1 ; --i)
	{ for (int k=(num-i) ; k>=1;--k)
			{ cout<<" ";}
		for(int j=2*i-1; j>=1 ; --j)
		{ 
			cout<<"*";
			
		}
	cout<<endl;
	}
	cout<<endl;
	return 0;
}
