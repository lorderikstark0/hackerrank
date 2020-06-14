#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
//incomplete code --> do it again 

int main(){
  int n ;
  cin >> n ;
  vector<int> arr;
  while(n-->0){
    int i;
    cin >> i;
    arr.push_back(i);
  }
    int x ;
    cin >> x;//denotes the position of vector that should be removed 
    int a ,b ;
    cin >> a >> b;//denotes the range where it should be deleted 

    vector<int>:: iterator it1 ;
    it1 = arr.begin();

    while(*it1!=x){
      it1++;
    }
    if(*it1==x){
      arr.erase(it1);
    }

    vector<int>::iterator it2 ,it3;

    it2 =arr.begin();
    it3=arr.end();
    while(*it)
    if( *it2==a && *it3==b){
      arr.erase(it2,it3);
    }

    for(size_t i=0;i<arr.size();i++){
      cout << arr[i]<<" ";
    }

  return 0;
}
