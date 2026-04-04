#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> ls;
    int n,num;
    long long sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        ls.push_back(num);
    }

    for(int j = 0; j < ls.size(); j++){
        for(int k = 0; k < ls.size(); k++){
            if(j == k){
                continue;
            }
            sum += abs(ls[j] - ls[k]);
        }
    }
    cout << sum;

    return 0;
}
