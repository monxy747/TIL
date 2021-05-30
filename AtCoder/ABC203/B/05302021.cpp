#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  int S = 0;
  cin >> N >> K;
  int s = (K * K + K)/2;
  //cinする前にint内で計算していてWAとなったので宣言後に計算するように注意
  for(int i = 0; i < N; i++){
  	S = S + ((i + 1) * 100 * K) + s;
  }
  cout << S << endl;
}