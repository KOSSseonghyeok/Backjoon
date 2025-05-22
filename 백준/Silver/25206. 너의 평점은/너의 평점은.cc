#include <iostream>
#include <string>

using namespace std;

int main(void){
    int n = 20;
    double sum_score = 0;
    double mult = 0;
    while(n--){
        string s, grade;
        string score;
        cin >> s >> score >> grade;
        
        string ls[10] = {"A+","A0","B+","B0","C+","C0","D+","D0","F","P"};
        double list[10] = {4.5, 4, 3.5, 3, 2.5, 2, 1.5, 1.0, 0, -1};
        if(grade == "P"){
                continue;
            }

        for(int i = 0; i < 10; i++){
            if(grade == ls[i]){
                mult += stoi(score) * list[i];
            }
        }

        sum_score += stoi(score);
    }
    cout << mult / sum_score << endl;

    return 0;
}