#include <bits/stdc++.h>
using namespace std;

int main(){
  int n ;
  cin >> n;
  vector<int>arr;
  while(n-->0){
    int h;
    cin >>h;
    arr.push_back(h);
  }
  for(size_t i=0;i<arr.size();i++){
    cout << arr[arr.size()-i-1]<< " ";
  }


  return 0;
}
