 #include<iostream>
 #include<iomanip>
 using namespace std;
 int main()
 { int n1,n2;
 bool p1 ,p2; 
 p1 = true , p2 = true;
 cout<<endl;
 cout <<"HELLo please Enter ist value  " <<endl;
 cin>>n1;
 cout <<"HELLo please Enter 2nd value  " <<endl;
 cin>>n2;
 cout  << "_________________________________" << endl << endl;

  cout<<"Here the twin pair of prime numbers from" <<n1<< " up to "<<n2<<endl<<endl;
    for (int i = n1; i <= n2 - 2; ++i) { 
        bool isPrime1 = true;
        bool isPrime2 = true;

       
        if (i <= 1) isPrime1 = false;
        for (int j = 2; j*j <= i; ++j) {
            if (i % j == 0) {
                isPrime1 = false;
                break;
            }
        }

       
        int twin = i + 2;
        if (twin <= 1) isPrime2 = false;
        for (int k = 2; k*k<= twin; ++k) {
            if (twin % k == 0) {
                isPrime2 = false;
                break;
            }
        }

        if (isPrime1 && isPrime2) {
            cout << i << ", " << twin << endl;
        }
    }

    return 0;
}
