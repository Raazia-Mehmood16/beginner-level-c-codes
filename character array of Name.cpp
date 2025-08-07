#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    bool check=1;
    int size;
    cout <<"ENTER number of letters of ur name"<<endl;
    cin>>size;
    char name[size];
    cout<<"ENTER your Cute Name ";
    cin>>name;
    for (int i = 0; i < size/2; ++i)
    {
        if(name[i]!=name[size-1-i])
       { check=0;
        break;}
        
    }
        if(check==1)
        cout<<endl<<" WOW!! Your name is  pailonoid "<<endl<<endl;
        else
        cout<<endl<<" Oppos!! Your name is not pailonoid "<<endl<<endl;
        return 0;
    }





        

