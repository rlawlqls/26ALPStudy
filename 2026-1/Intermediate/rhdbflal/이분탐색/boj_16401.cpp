//과자 나눠주기
#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int m, n, init, cnt;
vector <ll> snack;

long long find(long long mid){
    cnt = 0;
    for(auto c : snack){
        cnt += (c / mid);
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

    cin >> m >> n;
    for(int i = 0; i < n; ++i){
        cin >> init;
        snack.push_back(init);
    }
    sort(snack.begin(), snack.end());
    cout << func(1, snack.back());

	return 0;
}

