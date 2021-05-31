#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    //N個の点数データの配列定義
    vector<int> vec(N); 

    //点数データ受け取り
    for(int i = 0; i < N; i++){
        cin >> vec.at(i); 
    }

    //合計点計算
    int S = 0;
    for(int i = 0; i < N; i++){
        S += vec.at(i);
    }

    //平均点の算出
    int ave = S/N;

    //それぞれの点数と平均値との差を算出し出力
    int ans;
    for(int i = 0; i < N; i++){
        ans = vec.at(i) - ave;
        cout << abs(ans) << endl;
    }
}