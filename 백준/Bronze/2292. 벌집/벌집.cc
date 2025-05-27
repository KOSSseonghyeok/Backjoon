// 1 7 19 37

// 6 12 18

#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int max = 1;
    int sum = 1;
    int i = 1;
    if(n == 1){
        cout << sum << endl;
        return 0;
    }
    else{
        while(max < n){
            max += 6*i;
            i++;
            sum++;
        }
    }
    cout << sum << endl;



    return 0;
}