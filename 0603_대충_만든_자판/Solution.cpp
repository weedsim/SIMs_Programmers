#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int _howmany = targets.size();
    int _keycount = keymap.size();

    for (int t = 0; t < _howmany; t++) {

        int _size = targets[t].size();
        int _where = 0;
        bool TR = true;
        for (int i = 0; i < _size; i++) {
            char temp = targets[t][i];
            bool _have = false;
            int _whereWord = 100000;
            for (int j = 0; j < _keycount; j++) {
                if (keymap[j].find(temp) != string::npos) {
                    int _temp = keymap[j].find(temp);
                    _temp += 1;
                    if (_whereWord > _temp) {
                        _whereWord = _temp;
                    }
                    _have = true;
                }
            }
            if (!_have) {
                _where = -1;
                break;
            }
            _where += _whereWord;
        }

        if (TR) {
            answer.push_back(_where);
        }

    }

    return answer;
}

int main() {

    vector<string> keymap;
    vector<string> targets;



    //keymap.push_back("ABACD");
    //keymap.push_back("BCEFD");
    //targets.push_back("ABCD");
    //targets.push_back("AABB");



    //keymap.push_back("AA");
    //targets.push_back("B");



    //keymap.push_back("AGZ");
    //keymap.push_back("BSSS");
    //targets.push_back("ASA");
    //targets.push_back("BGZ");



    keymap.push_back("ABCDE");
    targets.push_back("FGHIJ");



    vector<int> ans = solution(keymap, targets);

    cout << ans.back();
    cout << ans.size();
    //ans.pop_back();
    //cout << ans.back();

    return 0;
}