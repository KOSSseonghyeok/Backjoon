#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> li;
    int cnt;
    int num;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        cin >> num;
        li.push_back(num);
    } 
    sort(li.begin(), li.end());

    for(int j = 0; j<li.size(); j++){
        cout << li[j] << '\n';
    }

    return 0;
}
