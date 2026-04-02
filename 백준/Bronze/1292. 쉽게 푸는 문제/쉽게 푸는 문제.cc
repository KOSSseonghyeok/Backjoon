#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> seq;
    for(int i = 1; i <= 1000; i++){
        for(int j = 0; j<i;j++){
            seq.push_back(i);
        }
    }

    int fst, fin;
    int sum = 0;
    cin >> fst >> fin;
    for(int k = fst-1; k < fin; k++){
        sum += seq[k];
    }

    cout << sum;



    return 0;
}