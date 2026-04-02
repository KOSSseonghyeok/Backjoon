#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cnt, num;
    vector<int> sol;
    cin >> cnt;
    int sum = 0;

    for(int i = 0; i < cnt; i++){
        cin >> num;
        if(num == 0){
            sol.pop_back();
        }
        else{
            sol.push_back(num);
        }
    }

    for(int k : sol){
        sum += k;
    }

    cout << sum;
    return 0;
}