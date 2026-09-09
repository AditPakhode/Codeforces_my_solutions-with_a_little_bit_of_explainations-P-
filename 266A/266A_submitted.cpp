#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char curr = s[0];
    int remove = 0;
    for(int i=1;i<n;i++){
        if(curr == s[i]){
            remove+=1;
            continue;
        }
        curr = s[i];
    }
    cout << remove;
    return 0;
}