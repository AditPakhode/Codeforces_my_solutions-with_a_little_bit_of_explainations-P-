#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(2*k > n){
            cout << -1 << '\n';
            continue;
        }
        int count=0;
        for(int i=0;i<k;i++){
            if(s[i] == 'L') count++;
            if(s[n-i-1] == 'R') count++;
        }
        cout << count << '\n';
    }
    return 0;
}