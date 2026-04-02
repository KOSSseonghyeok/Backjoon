#include <iostream>
#include <vector>

using namespace std;

int main(void){

    vector<int> a;
    vector<int> single;
    for(int i = 0; i < 7; i++){
        int j;
        cin >> j;
        a.push_back(j);
    }

    for(int k = 0; k < 7; k++){
        if(a[k] % 2 == 0){
            continue;
        }
        else{
            single.push_back(a[k]);
        }
    }
    if(single.size() == 0){
        cout << -1;
        return 0;
    }
    int sum = 0;
    int min = single[0];
    for(int i = 0; i < single.size(); i++){
        sum += single[i];
        if(min > single[i]){
            min = single[i];
        }
    }
    cout << sum << '\n' << min;

}