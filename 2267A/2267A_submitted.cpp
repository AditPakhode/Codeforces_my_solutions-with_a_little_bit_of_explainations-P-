#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char c;
        int n;
        cin >> n >> c;
        string s;
        cin >> s;
        int i=0, ans=0;
        while(i < n-i-1){
            if(s[i] != s[n-i-1]){
                if(c == s[i] || c == s[n-i-1]) ans+=1;
                else ans+=2;
            }
            i++;
        }
        cout << ans << '\n';
    }
    return 0;
}