#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 long long n,sq ,temp,temp2;
 int m,m2;
 cout<<endl;
 cout <<"HELLo please Enter a value  " <<endl;
 cin>>n;
 cout<<"-------------------------------------"<<endl<<endl;
 sq=n*n;
 temp2=sq;
 for(temp=n; temp>0 ; temp/=10)
 {m=temp%10;
 m2=temp2%10;
  if(m!=m2){
  cout<< "Opps!! Number " << n << " is NOT Automrphic !!! "<<endl;
  cout<<"As Saqure of "<<n <<" is "<<sq<<" ..."<<endl;
  return 1;}
  else
  temp2/=10;}
  cout<<"WOW!! You found (" <<n<< ") a Automorphic Number !!!"<<endl;
  cout<<"As Saqure of "<<n <<" is "<< sq<<" ..."<<endl;
  
 cout<<endl;
 return 0;
}