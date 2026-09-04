#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n-- > 0){
        string w;
        cin >> w;
        string ans;

        if(w.length() > 10){
            // do the change required and store it on to "ans"
            ans = w[0];
            ans += to_string(w.length()-2);
            ans +=  + w[w.length()-1];
        }
        else {
            ans += w;
        }
        cout << ans << endl;
    }
    return 0;
}