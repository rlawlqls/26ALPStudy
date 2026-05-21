//가장 큰 증가하는 부분 수열
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, x, Max;
int dp[1001], a[1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        a[i] = x;
        //dp[i] = x;
    }
    dp[0] = a[0];
    Max = a[0];
    for(int i = 1; i < n; ++i){
        dp[i] = a[i];
        for(int j = 0; j < i; ++j){
           if(a[j] < a[i]){
                dp[i] = max(dp[j]+a[i], dp[i]);

            }
           
        }
        // if(a[i] > a[i-1]){
        //     if(i>1 && a[i-2] < a[i]){
        //         dp[i] = max(dp[i-2]+a[i], dp[i-3]+a[i]);
                
        //     }
        //     else{
        //         dp[i] = dp[i-1] + a[i];
        //     }
        // }
        // else {
            
        //         // if(a[i-2] < a[i]){
        //         //     dp[i] = dp[i-3] + a[i]; 
                    
        //         // }
              
        //             dp[i] = dp[i-2] + a[i]; 

                

        // }
        Max = max(Max, dp[i]);
    }
    // for(int i = 0; i < n; ++i){
    //     cout << dp[i] << " ";
    // }
    // cout << "\n";
    cout << Max;
    return 0;
}