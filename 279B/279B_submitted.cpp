#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
void solve(){
    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int i=0, j=0;
    long long sum=0;
    int maxLen=0;
    while(i < n){
        sum+=arr[i];
        while(sum > t && j < i){
            sum-=arr[j];
            j++;
        }
        if(sum <= t) maxLen=max(maxLen, i-j+1);
        i++;
    }
    cout << maxLen << '\n';
}
int main(){
    fastio;
    solve();
    return 0;
}