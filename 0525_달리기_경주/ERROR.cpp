#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<int, string> result;
    int _playerCount = players.size();
    while (!players.empty()) {
        result[players.size()] = players.back();
        players.pop_back();
    }

    int _size = callings.size();
    for (int i = 0; i < _size; i++) {
        string temp;
        int _who;
        for (int j = 1; j <= _playerCount; j++) {
            if (callings[i] == result[j]) {
                _who = j;
                break;
            }
        }
        temp = result[(_who - 1)];
        result[_who - 1] = result[_who];
        result[_who] = temp;
    }

    for (int i = 1; i <= _playerCount; i++) {
        answer.push_back(result[i]);
    }

    return answer;
}

int main() {

    vector<string> players;
    vector<string> callings;
    players.push_back("mumu");
    players.push_back("soe");
    players.push_back("poe");
    players.push_back("kai");
    players.push_back("mine");
    callings.push_back("kai");
    callings.push_back("kai");
    callings.push_back("mine");
    callings.push_back("mine");

    vector<string> ans;
    ans = solution(players, callings);

    cout << ans.back();
    cout << ans.size();
    
    return 0;
}