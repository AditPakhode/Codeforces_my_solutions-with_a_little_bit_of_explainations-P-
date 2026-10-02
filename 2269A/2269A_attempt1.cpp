#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans = (1 << k)*(n/k);
        int rem=n%k;
        ans+= 1 << rem;
        cout << ans << '\n';
    }
    return 0;
}