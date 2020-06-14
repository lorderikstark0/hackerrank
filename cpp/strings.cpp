#include <bits/stdc++.h>
using namespace std;


int main(){
  string a ;
  cin >> a ;
  string b;
  cin >>b;

  cout << a.size() << " "<< b.size() << "\n";
  cout <<a+b<<"\n";

  char c =a[0];
  a[0]=b[0];
  b[0]=c;

  cout << a << " "<<b <<"\n";

  return 0;
}
