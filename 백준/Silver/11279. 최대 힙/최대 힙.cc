#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue<int> ls;
    int cnt, num;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        cin >> num;
        if(num == 0){
            if(ls.empty()){
                cout << 0 << '\n'; 
                continue;
            }
            cout << ls.top() << '\n';
            ls.pop();
            continue;
        }
        ls.push(num);
    }
    return 0;
}