#include <iostream>
using namespace std;

int main()
{
    const int Username = 12345,Password = 9876,OTP = 123456;  //  correct username, password, and OTP
    bool failedAttempts = false; //  user attempts failed login 
    int myUsername, myPassword, myOTP;
     // take username and password from user
     cout<<endl;
     cout << "Enter your username: ";
     cin >> myUsername;
     cout << "Enter your password: ";
     cin >> myPassword;
     if(!failedAttempts)
     {
     if (myUsername == Username && myPassword == Password)  // Check  username and password are correct or NOT
         {
        cout << "Enter your 2-factor Authentication code (OTP)of 6 digits: "; // Password is correct, ask for OTP
        cin >> myOTP;
        if (myOTP == OTP ) // OTP is correct and no failed attempts
         {
            cout << " CONGRATULATIONS!!!!! Access Granted....."<<endl<<"------WELCOME!!!!-------" << endl; // All conditions are met, access granted
        } else     // OTP is incorrect or there were failed attempts
        {
            failedAttempts = true; // for failed attempt
            cout << "Error!!! Incorrect OTP -----"<<endl<<"--------Access Denied-------- " << endl;
        }
    } else   // Username or password is incorrect
        {
         failedAttempts = true; // Consider failed attempt
        cout << " OPPS!!! Error!!!! Incorrect Username or Password."<<endl<< "---------Access Denied------- " << endl;
        }
     }
     else
     cout<<"Error!!! Acess can't be GRANTED you AGAIN!!! as you failed your previous attempt----"<<endl;
  
     cout<<endl;
    return 0;
}