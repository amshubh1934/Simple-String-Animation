#include<iostream>
#include<string>
#include<unistd.h>
#include<vector>
using namespace std;
string join(vector<char> arr,int n){
  string ans = "";
  for(int i = 0;i < n;i++){
    ans += arr[i];
  }
  return ans;
}
int main(){
  string s;
  cout <<"Enter a string you want : " <<endl;
  getline(cin ,s);
  transform(s.begin(),s.end(), s.begin(),::tolower);
  vector<char> arr((int)s.length());
  for(int i = 0;i < (int)s.length();i++){
    arr[i] = s[i];
  }
  bool flag = true;
  while(flag){
    int i = 0;
    for(;i < (int)arr.size();i++){
      char old = arr[i];
      arr[i] = toupper(old);
      string str = join(arr,(int)arr.size());
      cout <<"\r";
      cout <<str;
      cout <<flush;
      arr[i] = old;
      usleep(1000000);
    }
  }
  string str = join(arr,7);
  cout <<"\r";
  cout <<str;
  cout <<flush;
  cout <<endl;
  return 0;
}
