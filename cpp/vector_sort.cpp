#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
  int n;
  cin >> n ;
  vector<int> arr;
  while(n-->0){
    int i;
    cin >> i;
    arr.push_back(i);
  }
  sort(arr.begin(),arr.end());
  for(size_t i=0;i<arr.size();i++){
    cout << arr[i]<<" ";
  }

  return 0;
}
