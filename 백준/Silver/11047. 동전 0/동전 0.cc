#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, num;
    cin >> n >> k;
    vector<int> ls;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> num;
        ls.push_back(num);
    }
    reverse(ls.begin(), ls.end());

    
    for(int j : ls){
        if(j > k){
            continue;
        }
        for(;j <= k;){   
            cnt++;
            k -= j;
        }
    }
    cout << cnt;

    return 0;
}