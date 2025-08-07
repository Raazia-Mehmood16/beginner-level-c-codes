 #include<iostream>
 #include<iomanip>
 using namespace std;
 int main()
 { int n,prime1,prime2=0;
 cout<<endl;
 cout <<"HELLo please Enter a  value  " <<endl;
 cin>>n;
 cout  << "_________________________________" << endl << endl;

  cout<<"Here the twin pair of prime numbers up to "<<n<<endl<<endl;
  for (int i = 2; i <= n - 2; ++i) {
        bool P1 = true, P2 = true;

        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                P1 = false;
               break;
            }
        }
        for (int j = 2; j * j <= i + 2; ++j) {
            if ((i + 2) % j == 0) {
                P2 = false;
                break;
            }
        }
        if (P1 && P2) {
            cout << "(" << i << ", " << i + 2 << ")" << endl;
        }
    }
    cout<<endl;
    return 0;
    }




