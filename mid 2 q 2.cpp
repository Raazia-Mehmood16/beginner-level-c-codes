#include<iostream>
 #include<iomanip>
 using namespace std;
 int main()
 { int option, n;
    cout<<"WELCOME TO MATHEMATICA"<<endl;
    cout<<endl<<"_____________________________________"<<endl<<endl;
 do

 {
    cout<< "Enter a Number to perfom these tasks"<<endl;
    cout<<"1- To print first Fabancai Numbers"<<endl;
    cout<<"2- To check if your Number is plaindrome"<<endl;
    cout<<"3-To check if your Number is Prime or Not"<<endl;
    cout<<"4- To Exits"<<endl;
    cin>>option;
    cout<<endl;
    switch(option)
    {
        case 1:
      { 
        cout<<"Please Enter a Number to check First N fabanci numbers : ";
        cin>>n;
        cout<<endl;
        for(int i=0,j=0;i<=n;++i)

        {    cout<<" "<<j;
             j=i+j;
         
        }
      }
       
       case 2:
       { 
       cout<<endl<<"Please Enter a Number to check if Number is prime or not"<<endl;
       cin>>n;
       bool isPrime=true;
       for(int i=2;i*i<=n;++i)
     { isPrime =true;
       for(int j=2 ; j*j<=n-2;++j)
       if(j%i==0)
       isPrime=false;
       cout<<"Not prime"<<endl;
     }
       }

    }
    /* code */
 } while (option!=4);
 cout<<endl<<"Thanks for using Mathematica"<<endl;
 return 0;
 }

 