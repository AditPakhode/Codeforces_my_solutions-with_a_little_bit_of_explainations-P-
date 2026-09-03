#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int w;
        cin >> w;

        if(w%4==0){
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    return 0;
}