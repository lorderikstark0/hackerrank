#include <sstream>
#include <vector>
#include <iostream>
#include <cstring>

using namespace std;

vector<string> parseInts(string str){
  vector<string> results;
  string token;
  stringstream ss(str);

  while(getline(ss,token,',')){
    results.push_back(token);
  }
  return results;

}


int main(){
  string str;
  cin >> str;
  vector<string> integers =parseInts(str);
  for(size_t i=0;i<integers.size();i++){
    cout << integers[i]<<"\n";
  }

  return 0;
}
