#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<endl;
    cout<< "Hello Dear PLease Enter a number!!!"<<endl;
    cin>> n;
    long long lPrime = 1;      
    for(n; n % 2 == 0; n /= 2 ) 
        lPrime = 2;    
    for (long long i = 3; i * i <= n; i += 2) {
        for(n;n % i == 0;n/=i) 
            lPrime = i;  }
    if (n > 2)
        lPrime = n; 
cout << "Largest prime factor: " << lPrime << endl;

  cout<<endl;  
return 0;
}