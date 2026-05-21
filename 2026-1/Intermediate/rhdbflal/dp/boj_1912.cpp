//연속합
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, x, Max;
int dp[100001], res[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    
    
    for(int i = 0; i < n; ++i){
        cin >> x;
        res[i] = x;
    }
    dp[0] = res[0];
    Max = res[0];
    for(int i = 1; i < n; ++i){
        dp[i] = max(dp[i-1]+res[i], res[i]);
        Max = max(Max, dp[i]);
    }
    cout << Max;

    return 0;
}

// dp에는 계속 연속된 배열의 최대값만 넣어준다. 
// 처음에는 첫번째 원소 값을 넣고 그 다음 값을 더할 떄 그 더한 값이랑 그 더해준 값이랑 비교했을 때의 최대값을 갱신을 한다면 
// 연속합의 최대값을 구할 수 있따. 