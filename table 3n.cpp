#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int size;
cout<<endl;
cout<< "Hello Dear, Please Enter a number for Table limit !!"<<endl;
cin>>size;
cout<<"-------------------------------------"<<endl<<endl;
cout << "Multiplication Table from 1 to " << size << ":" << endl<<endl;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << i * j << "  ";  
        }
        cout << endl;  
    }

cout<<endl;
    return 0;
}