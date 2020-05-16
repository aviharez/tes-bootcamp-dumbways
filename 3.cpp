/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void image(int n) {
    int i, j, k, l=1, setengah;
    setengah = n/2;
        if(n%2==0){
          cout << "Parameter harus ganjil";
        } else{        
          for(i=0;i<setengah;i++){
            for(j=setengah;j>=i;j--){
              cout << " ";
            }
            for(k=1;k<=l;k++){
              if (k == 1 || k == (l/2)+1 || k == l) {
                  cout << "*";
              } else {
                  cout << " ";
              }
              
            }
            l+=2;
            cout << endl;
          }
          for(i=0;i<n-setengah;i++){
            for(j=0;j<=i;j++){
              cout << " ";
            }
            for(j=l;j>0;j--){
              if (j == 1 || j == (l/2)+1 || j == l) {
                  cout << "*";
              } else {
                  cout << " ";
              }
            }
            l-=2;
            cout << endl;
          }
        }
}

int main()
{
      int n;
      cout << "Masukkan tinggi: ";
      cin >> n;
      image(n);
    return 0;
}
