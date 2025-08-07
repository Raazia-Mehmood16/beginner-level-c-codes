#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char op;
    cout<<endl;
    cout<< "Hello Dear Please Enter a Alphabet from given 10 Alphabets "<<endl;
    cout<<"( C,E,F,H,I,L,O,T,U,V ):  ";
    cin>> op;
    cout<<endl<<"-----------------------------------------------------"<<endl<<endl;
    
    switch(op)
 {
   case'C':
   {
        for (int i = 1;i <= 6;i++)
{
	for (int j = 1;j <= 6;j++)
	{
		if (i == 2 && j == 4 || i == 3 && j == 2 || i == 3 && j == 2 ||
         i == 4 && j == 2 || i == 5 && j == 2|| i == 6 && j == 3 || 
         i == 6 && j == 4||i == 5 && j == 5|| i == 3 && j == 5 )
		{
			cout << "+";
		}
		else {
			cout << " ";
		}
	}
	cout<<endl;
} 

   break;
   }

   case'E':
   {
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 7; j++) {
                if (j == 1 || i == 1 || i == 4||i==7)
                        cout << "+";
                else
                        cout << " ";
            }
        cout << endl;
        } 

   break;
   }

   case'F':
   {
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 7; j++) {
                if (j == 1 || i == 1 || i == 3)
                        cout << "+";
                else
                        cout << " ";
            }
        cout << endl;
        } 

   break;
   }

   case'H':
   {
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 7; j++) {
                if (j == 1 || i == 4 || j == 7)
                        cout << "+";
                else
                        cout << " ";
            }
        cout << endl;
        } 

   break;
   }

   case'I':
   {
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 7; j++) {
                if (j == 4 || i == 1 || i == 7)
                        cout << "+";
                else
                        cout << " ";
            }
        cout << endl;
        } 

   break;
   }

   case'L':
   {
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 7; j++) {
                if (j == 1 || i == 7 )
                        cout << "+";
                else
                        cout << " ";
            }
        cout << endl;
        } 
    
    break;
   }

   case'O':
   {
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 7; j++) {
                if (j == 1 || i == 1 || i == 7||j==7)
                        cout << "+";
                else
                        cout << " ";
            }
        cout << endl;
        } 

   break;
   }

   case'T':
   {
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 7; j++) {
                if (j == 4 || i == 1 )
                        cout << "+";
                else
                        cout << " ";
            }
        cout << endl;
        } 

   break;
   }

   case'U':
   {
        for (int i = 1; i <= 7; i++) {
            for (int j = 1; j <= 7; j++) {
                if (j == 1 || i == 7 || j == 7)
                        cout << "+";
                else
                        cout << " ";
            }
        cout << endl;
        } 

   break;
   }

   case'V':
   {
        for (int i = 1; i <= 6; i++) {
            for (int j = 1; j <= 11; j++) {
                if ((j == i || j == 12 - i) && i <= 6)
                        cout << "+";
                else
                        cout << " ";

            
            }
        cout << endl;
        } 

   break;
   }

   default:
   {
       cout<<endl<< "ERROR!!! Please Restart your programme......";
       cout<< "And Again Enter Alphabet from given Options."<<endl;
   return 1;
   }
 
 }

cout<<endl<<endl<<"THANK U for Executing....."<<endl;
cout<<endl;

  return 0; 
}


// if( op!='C'||op!='E'||op!='F'||op!='H'||op!='I'||
//         op!='L'||op!='O'op!='T'||op!='U'||op!='V'  )