#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    map<int,int> cnt;
    int left=0,maxLen=1;
    for(int right=0; right < n ; right++){
        cnt[arr[right]]++;
         while(cnt.rbegin()->first-cnt.begin()->first > 1){
            if(--cnt[arr[left]] == 0) cnt.erase(arr[left]);
            left++;
         }
         maxLen=max(maxLen, right-left+1);
    }
    cout << maxLen << '\n';
}
int main(){
    fastio;
    solve();
    return 0;
}