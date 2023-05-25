#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<int, string> result;
    map<string, int> rev;
    int _playerCount = players.size();
    while (!players.empty()) {
        result[players.size()] = players.back();
        rev[players.back()] = players.size();
        players.pop_back();
    }

    int _size = callings.size();
    for (int i = 0; i < _size; i++) {
        string temp;
        // 몇등이 추월하는지
        int _who;
        _who = rev[callings[i]];

        // 추월당하는 사람과 추월하는 사람 바꾸기
        temp = result[(_who - 1)];
        rev[temp] = _who;
        rev[result[_who]] = _who - 1;
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
