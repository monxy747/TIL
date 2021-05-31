#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> vec; 
    vec = { A, B, C };
    sort(vec.begin(), vec.end());
    cout << vec.at(2) - vec.at(0) << endl;
}

/*他の人の回答
#include <iostream>
using namespace std;
int main(){
  int A,B,C;
  cin >> A >> B >> C;
  cout << max(A,max(B,C)) - min(A,min(B,C)) << endl;
}
*/