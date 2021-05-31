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
        //点数と平均の差分を計算
        ans = vec.at(i) - ave;
        //abs()は絶対値を求める関数
        cout << abs(ans) << endl;
    }
}