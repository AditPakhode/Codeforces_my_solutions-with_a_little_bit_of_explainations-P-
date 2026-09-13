#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        string s;
        cin >> s;
        int oneOccurance = s.find("1");
        int zeroOccurance = s.find("0");
        int n = s.length();
        string ans ="";
        for(int i=0;i<n;i++){
            if(i == oneOccurance || i == zeroOccurance){
                continue;
            }
            ans.push_back(s[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}