#include<iostream>
 #include<iomanip>
 using namespace std;
 int main()
 { int row,col;
 cout<<endl;
 cout <<"HELLo please Enter a  value of row  " <<endl;
 cin>>row;
//   cout <<"HELLo please Enter a  value of column  " <<endl;
//  cin>>col;
 cout  << "_________________________________" << endl << endl;
for(int i=1;i<=row;++i)
{
    int j;
    for( j=1;j<=row-i;++j){
    cout<<" ";
}
int k=i;
for(;j<=row;++j){
    cout<<k--;
}
for(; j<=row+i-1;++j){
cout<<k--;}
cout<< endl;}


 return 0;
 }