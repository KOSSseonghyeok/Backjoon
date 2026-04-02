#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> li(5);
    int num;
    int avg = 0;
    for(int i = 0; i < 5; i++){
        cin >> num;
        li[i] = num;
        avg += num;
    }
    avg /= 5;
    sort(li.begin(), li.end());
    cout << avg << '\n' << li[2];

}