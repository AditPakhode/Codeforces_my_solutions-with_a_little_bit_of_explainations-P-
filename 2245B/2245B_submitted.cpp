#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
void solve(){
    int n;
    long long c;
    cin >> n >> c;
    vector<long long> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long ans=0;
    int k=0;// => no. of pairs;
    long long sum_arr=0;
    long long sum_losers=0;
    for(int i=0;i<n;i++) sum_arr+=arr[i];
    for(int i=0;i<(n/2);i++){
        if(arr[i]<c){
            sum_losers+=arr[i];
            k++;
        }
        else break;
    }

    ans= sum_arr - sum_losers - c*(n-k);
    cout << ans << '\n';
}
int main(){
    fastio;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}