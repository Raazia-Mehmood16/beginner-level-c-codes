#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int n ,count=0,pre=0,next=0;
cout<<endl;
cout<<"Enter the size of Array: ";
cin>>n;
cout<<endl;
int arry[n];
cout<<"Enter "<<n<<" numbers:"<<endl; 
for (int i = 0; i <n; ++i)
{
    cin>>arry[i];
}
pre=arry[0];
next=arry[2];
cout<<endl<<"This is peak element of Array : "<<endl;
for (int i = 1; i < n; ++i)
{
    if(arry[i]>pre && arry[i]>next) 
    { ++count;
    cout<<arry[i]<<" ";
     }
     pre=arry[i];
     next=arry[i+2];

}
cout<<endl<<"Total Peak Elements are : "<<count;
cout<<endl<<endl;




    return 0;
}