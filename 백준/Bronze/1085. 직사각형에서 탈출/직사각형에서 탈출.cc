#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int sum = min(h-y, w-x);
    if(sum > min(x-0, y-0)){
        sum = min(x-0, y-0);
    }
    cout << sum << endl;
    return 0;
}