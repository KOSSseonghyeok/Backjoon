#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int a, b ,v;
    cin >> a >> b >> v;

    int day = ceil(double((v-a)) / (a - b))+1;
    
    
    cout << day << endl;


    return 0;
}