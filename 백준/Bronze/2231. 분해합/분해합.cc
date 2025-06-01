#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void){
    int num;
    cin >> num;
    int make = 0;
    int sum;
    for(int i = 0; i < num; i++){
        sum = 0;
        int i1 = i;
        for(int j = 0; j < to_string(i).length(); j++){
            sum += i1 % 10;
            i1 /= 10;
        }
        if(sum + i == num){
            make = i;
            break;
        }
    }
    cout << make << endl;
    

    return 0;
}