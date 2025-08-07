#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int maxGap = 0, p1 = 0, p2 = 0, lastPrime = 0;
    int n;
bool prime = true;
cout<<endl;
cout<< "Hello Dear, Please Enter a number for find largest Gap b/w prime numbers!!"<<endl;
cin>>n;
cout<<"--------------------------------------------------"<<endl<<endl;
for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
           { if (i % j == 0) 
            { isPrime = false;
                break;
            }
        }
        if (isPrime) 
            { if (lastPrime != 0 && (i - lastPrime > maxGap)) 
             {  maxGap = i - lastPrime;
                p1 = lastPrime;
                p2 = i;
             }
            lastPrime = i;
            }
    }
    if (p1 != 0 && p2 != 0) {
        cout << "Largest Gap Pair of prime numbers between 1 to "<<n<<" is :" <<endl
        << p1 << " and " << p2 << " with a gap of " << maxGap<<" ....." << endl;
    } else {
        cout << "No prime gap found." << endl;
    }
cout<<endl;
return 0;
}