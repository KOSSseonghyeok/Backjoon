#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string s;
    vector<string> ls;

    cin >> s;
    for(int i = 0; i < s.size(); i++){
        ls.push_back(s.substr(i));
    }
    sort(ls.begin(), ls.end());

    for(string j : ls){
        cout << j << '\n';
    }
    return 0;
}