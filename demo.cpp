#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Enter Number of rows: ";
  cin >> n;  
  cout << endl << endl;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}