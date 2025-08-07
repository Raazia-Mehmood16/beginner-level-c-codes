#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int n ,x;
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
cout<<endl<<"Enter the number U want to replace :";
cin>>x;

for (int i = 0; i < n; ++i)
{
    if(arry[i]==x)
    { arry[i]=-1; }
}
cout<<endl<<"This is Updated Array :"<<endl;
for (int i = 0; i < n; ++i)
{
    cout<<arry[i]<<" ";
}
cout<<endl<<endl;




    return 0;
}