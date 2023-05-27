#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    vector<int> used;
    vector<vector<int>> record;
    vector<int> temp;

    int hab = 0;

    int _size = number.size();

    for (int i = 0; i < _size; i++) {
        hab += number[i];
        used.push_back(i);

        for (int j = 0; j < _size; j++) {
            if (used.back() == j) { continue; }
            hab += number[j];
            used.push_back(j);

            for (int k = 0; k < _size; k++) {
                if (used[0] == k || used[1] == k) { continue; }
                used.push_back(k);
                hab += number[k];
                temp = used;
                sort(temp.begin(), temp.end());
                if (hab == 0 && find(record.begin(), record.end(), temp) == record.end()) { 
                    answer++; 
                    record.push_back(temp); 
                }
                hab -= number[k];
                used.pop_back();
            }
            hab -= number[j];
            used.pop_back();
        }
        hab -= number[i];
        used.pop_back();
    }



    return answer;
}

int main() {

    vector<int> number;


    
    //number.push_back(-2);
    //number.push_back(3);
    //number.push_back(0);
    //number.push_back(2);
    //number.push_back(-5);

    

    //number.push_back(-1);
    //number.push_back(1);
    //number.push_back(-1);
    //number.push_back(1);



    number.push_back(-3);
    number.push_back(-2);
    number.push_back(-1);
    number.push_back(0);
    number.push_back(1);
    number.push_back(2);
    number.push_back(3);



    int ans = solution(number);

    cout << ans;

    return 0;
}