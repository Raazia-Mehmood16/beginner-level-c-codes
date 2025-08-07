#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int const limit=100;

class raazia
{ int arr[limit];
 public:
int& access(int n)
{
    if(n<0||n>=limit)
    {cout<<"Sorry Out of Bound";
    exit(1);}
    return arr[n];
}
};
int main()
{
    raazia awan;
  for(int i=0 ; i<limit;++i)
  {
     awan.access(i)=i*2;
  }
  for (int i=0 ; i<limit;++i)
  {
     int tmp;
     tmp= awan.access(i);
     cout<<"\nElement is "<<i<<endl;
  }
  return 0;
}

