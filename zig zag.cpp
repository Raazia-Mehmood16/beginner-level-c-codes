#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int n;
cout<<endl;
cout<< "Hello Dear, Please Enter a number"<<endl;;
cin>> n;
cout<<"_________________________________" <<endl<<endl;

    for (int i = 0; i < n; ++i) {
         for (int j = 0; j < n; ++j) {
            if (j == i || j == n - i - 1)  
               cout << "*";  
             else
                cout << " ";  
        }
     cout << endl;  
    }
cout<<endl;
return 0;

}