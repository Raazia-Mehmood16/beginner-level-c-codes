#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int n;
cout<<endl;
cout<< "Hello Dear, Please Enter a number for size of chess pattern!!"<<endl;
cin>>n;
if(n%2==0)
{cout<<"ERROR!!! Please choose a valid size of odd number."<<endl;
cout<< "Enter AGAIN a number for size of chess pattern!!"<<endl;
cin>>n;}
cout<<endl<<"-------------------------------------"<<endl;
for (int i=1 ; i<=n ; ++i)
{for(int j=1 ; j<=n ;++j){
if ((i + j) % 2 == 0)
cout << " 1"; 
if((i + j) %2 !=0)
cout<<" 0";
 else
cout << "";}
cout<<endl;   
}
    cout<<endl;
    return 0;
}
