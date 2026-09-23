#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans=0;
        int buffer=0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                buffer = k;
                continue;
            }
            if(s[i]=='0' && buffer == 0){
                ans++;
                continue;
            }
            buffer--;
        }
        cout << ans << '\n';
    }
    return 0;
}