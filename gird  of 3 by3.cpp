#include<iostream>
using namespace std;

int main() {
int a11,a12,a13,a21,a22,a23,a31,a32,a33;
int dig1,dig2;
    cout<<endl;
    cout << "Enter 9 numbers to fill a 3x3 Grid:" << endl;
    cout<<"Enter row 1 "<<endl;
    cin>>a11>>a12>>a13,cout<<endl;
    cout<<"Enter row 2 "<<endl;
    cin>>a21>>a22>>a23,cout<<endl;
    cout<<"Enter row 3 "<<endl;
    cin>>a31>>a32>>a33,cout<<endl;
    cout<<endl<<"-------------------------------------"<<endl;

    cout << endl << "The 3x3 grid is:" << endl;
    cout << a11 << "  " << a12 << "  " << a13 << endl;
    cout << a21 << "  " << a22 << "  " << a23 << endl;
    cout << a31 << "  " << a32 << "  " << a33 << endl;
    dig1=a11+a22+a33;
    dig2=a13+a22+a31;
    if(dig1==dig2)
   {
        cout <<endl<< "Congrats! The grid forms a Magic Square!" << endl;
    } else {
        cout <<endl<< "Sorry, the grid does NOT form a Magic Square!" << endl;
     }
  cout<<"__________________________________"<<endl<<endl;
    return 0;
}
