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
{for(int j=1;j<=row-i;++j){
    cout<<"  ";
}
for(int j=1;j<=2*i-1;++j){
    cout<<"* ";
}


cout<< endl;}


for(int i=row;i>=1;--i)
{for(int j=1;j<=row-i;++j){
    cout<<"* ";
}
for(int j=1;j<=2*i-1;++j){
    cout<<"  ";
}

cout<< endl;}



 return 0;
 }