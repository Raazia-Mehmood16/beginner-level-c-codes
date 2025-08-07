#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ int n ,m,sum=0;
cout<<endl;
cout<<"Enter the size of row and col of  Array: ";
cin>>n>>m;;
cout<<endl;
int arry[n][m];
cout<<"Enter "<<n*m<<" numbers:"<<endl; 
for (int i = 0; i <n; ++i)
{ for(int j=0 ; j< m;++j)
   { cin>>arry[i][j];
    }
}

int top = 0, bottom = n - 1, left = 0, right = m - 1;
    cout << endl << "Elements in Spiral Order: ";
    
    while (top <= bottom && left <= right) {

    for (int i = left; i <= right; ++i) {
            cout << arry[top][i] << " ";
            sum += arry[top][i];
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            cout << arry[i][right] << " ";
            sum += arry[i][right];
        }
        right--;
        
        if (top <= bottom) {
          for (int i = right; i >= left; --i) {
                cout << arry[bottom][i] << " ";
                sum += arry[bottom][i];
            }
            bottom--;
        }
        
        if (left <= right) {
 for (int i = bottom; i >= top; --i) {
                cout << arry[i][left] << " ";
                sum += arry[i][left];
            }
            left++;
        }
    }
  
cout<<endl<<"This is sum of element of spiral Array : "<<sum<<endl;

for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            for (int k = 0; k < m - 1 - j; ++k) {
                if (arry[i][k] > arry[i][k + 1]) {
      int sort = arry[i][k];
                    arry[i][k] = arry[i][k + 1];
                    arry[i][k + 1] = sort;
                }
            }
        }
    }
    
cout<<endl<<"This is Sorted Array : "<<endl;
 for (int i=0;i<n;++i)
  { for(int j=0;j<m;++j)
  { cout<<arry[i][j]<<" ";
  
  }
  cout<<endl;
  }
cout<<endl<<endl;
 return 0;
}