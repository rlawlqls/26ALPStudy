//나무 자르기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, init;
long long cnt; //자료형 다 섞이게 사용했더니 틀렸다그랬음..
vector<int> v;
long long find(long long mid){
    cnt = 0;
    for(auto c : v){
        if(c - mid >= 0){
            cnt += (c - mid);
        }
    }
    return cnt;
}
long long func(long long left, long long right){
    if(left > right) return right;
    long long mid = ( left + right ) / 2;
    long long res = find(mid);
   
    
    if(res >= m) { 
        return func(mid + 1, right);
    }
    
    else {
        return func(left, mid - 1);
    }


}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> init;
        v.push_back(init);
    }
    sort(v.begin(), v.end());
    cout << func(0, v.back());

	return 0;
}

