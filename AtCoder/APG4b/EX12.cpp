#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;

  int answer = 1;
  int num = S.size();

  for (int i = 1; i < num; i += 2){
    if (char s = S.at(i) == '+'){
      answer ++;
    }else{
      answer --;
    }
  }
  cout << answer << endl;
}

/* charとstringの使いわけ*/
