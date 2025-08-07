#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int size;
cout<<endl;
cout<< "Hello Dear, Please Enter a number for Pascal triangle limit !!"<<endl;
cin>>size;
cout<<"-------------------------------------"<<endl<<endl;
 for (int i = 0; i < size; i++) {
        int n = 1;  
        for (int j = 0; j <= i; j++) {
            cout << n << " ";
            n = n * (i - j) / (j + 1); }
        cout << endl;
    }
 cout<<endl;
    return 0;
}