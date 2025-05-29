#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    int ls[3] = {a, b, c};
    sort(ls, ls+3);
    if(ls[2]>= ls[0]+ls[1]){
        ls[2] = ls[0] + ls[1] - 1;
    }
    int sum = ls[0] + ls[1] + ls[2];
    cout << sum << endl;
    return 0;
}