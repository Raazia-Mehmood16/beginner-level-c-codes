#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n , b , a , sum=0 , count=0;
    cout<<endl;
    cout<< "Enter a number."<<endl;
    cin>>n;
    cout<<"-------------------------------------"<<endl<<endl;
    for(int i=1;i<=n;++i)
    {  a=1,b=1;
       for(int j=1; j<=i;++j)
       { 
          b= a*b;
          ++a;
       }
       ++count;
       cout<< "Factorial of "<<count <<" is "<<b <<endl;
       sum=sum+b;
    }
    cout<<endl<< "Sum of factorial from 1 to "<<n<<" is "<<sum<<endl;
    cout<<endl;
    return 0;
}