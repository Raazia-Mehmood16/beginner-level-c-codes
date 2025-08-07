#include<iostream>

#include<iomanip>
using namespace std;
int main()
{
 int max=0,ind;
 const int size=10;
 int myArray[size];
 max=myArray[0];
 cout <<"Enter numbers to 10"<<endl;
 for (int i = 0; i < size; i++)
 { 
    cin>>myArray[i];
 }
 
for ( int i = 0; i <size; i++)
{
   if (myArray[i]>max)
   {
    max=myArray[i];
    ind=i;
   } 
}
cout<<"the oput is entered by you"<<endl;
for (int i = 0; i < size ; ++i)
{
    cout<<endl<<myArray[i]<<endl<<endl;
}

cout<<" The maximum number from 1 to 100 is "<<max<<endl<<endl;
cout<<" The Index number of maximuun Number from array is "<<ind<<endl;
cout<<myArray[ind]<<"  ";
cout<<endl<<endl<<"   ";
 return 0;

}