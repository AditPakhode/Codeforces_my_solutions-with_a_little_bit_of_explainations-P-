#include <iostream>
#include <string>
using namespace std;

int main(){
    int x=0;
    int n;
    cin >> n;
    while(n-- > 0){
        string stmt;
        cin >> stmt;

        for(int i=0;i<stmt.length();i++){
            if(stmt[i] == '+'){
                x+=1;
                break;
            }
            else if(stmt[i]=='-'){
                x-=1;
                break;
            }
        }
    }
    cout << x;
    return 0;
}