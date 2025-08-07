#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int n;
bool prime = true;
cout<<endl;
cout<< "Hello Dear, Please Enter a number for find prime numbers!!"<<endl;
cin>>n;
cout<<"-------------------------------------"<<endl<<endl;
for(int i=2; i<=n;++i)
{prime=true;
for(int j=2 ; j*j<=i;++j){
if(i%j==0){
prime=false;
break;}}
if(prime)
cout<<i<<" ";
}
cout<<endl<<endl;
return 0;
}