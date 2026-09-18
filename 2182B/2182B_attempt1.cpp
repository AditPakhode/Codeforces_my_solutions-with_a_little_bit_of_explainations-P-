#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int a, b;
        cin >> a >> b;
        int a_layer=-1;
        int temp_a=a, temp_b=b;
        while(a >= 0 && b >= 0){
            if(a-static_cast<int>(round(pow(2,a_layer+1))) >= 0 && (a_layer+1)%2 == 0){
                a_layer++;
                a-=static_cast<int>(round(pow(2,a_layer)));
            }
            else if(b-static_cast<int>(round(pow(2,a_layer+1))) >= 0 && (a_layer+1)%2 == 1){
                a_layer++;
                b-=static_cast<int>(round(pow(2,a_layer)));
            }
            else break;
        }
        a=temp_a;
        b=temp_b;
        int b_layer=-1;
        while(a >= 0 && b >= 0){
            if(a-static_cast<int>(round(pow(2,b_layer+1))) >= 0 && (b_layer+1)%2 == 1){
                b_layer++;
                a-=static_cast<int>(round(pow(2,b_layer)));
            }
            else if(b-static_cast<int>(round(pow(2,b_layer+1))) >= 0 && (b_layer+1)%2 == 0){
                b_layer++;
                b-=static_cast<int>(round(pow(2,b_layer)));
            }
            else break;
        }
        cout << max(a_layer, b_layer)+1 << '\n';
    }
    return 0;
}