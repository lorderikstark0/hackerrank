#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
  int q;
  cin >> q;
  set<int> order;
  while(q-->0){
    int y , x;
    cin >> y >> x;
  order.insert(pair<int ,char>(y,x));
  }
  return 0;
}
