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
        while (a >= 0 && b >= 0) {
        int next_layer = a_layer + 1;
        int req = 1 << next_layer;
        if (a >= req && next_layer % 2 == 0) {
            a_layer++;
            a -= req;
        }
        else if (b >= req && next_layer % 2 == 1) {
            a_layer++;
            b -= req;
        }
        else {
            break;
        }
    }
        a=temp_a;
        b=temp_b;
        int b_layer=-1;
        while(a >= 0 && b >= 0){
            int next_layer=b_layer+1;
            int req=1 << next_layer;
            if(a >= req && next_layer%2 == 1){
                b_layer++;
                a-=req;
            }
            else if(b >= req && next_layer%2 == 0){
                b_layer++;
                b-=req;
            }
            else break;
        }
        cout << max(a_layer, b_layer)+1 << '\n';
    }
    return 0;
}