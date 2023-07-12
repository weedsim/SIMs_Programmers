#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int check(char _s, string s) {
    map<char, int> cnt;
    cnt[_s] = 1;
    int _size = s.size();
    for (int i = 1; i < _size; i++) {
        // 맵에 없는 키, -> 처음 나온 다른 문자일 때
        if (cnt.find(s[i]) == cnt.end()) {
            cnt[s[i]] = 1;
            // 분리할 순간, -> 첫 문자가 나온 횟수와 지금 나온 문자가 나온 횟수가 같을 때
            if (cnt[s[i]] == cnt[_s]) {
                return i;
            }
        }
        // 첫 문자와 같은게 나오면
        else if (s[i] == _s) {
            cnt[_s]++;
        }
        // 첫 문자와 다른게 나오면
        else if (s[i] != _s) {
            cnt[s[i]]++;
            // 분리할 순간, -> 첫 문자가 나온 횟수와 지금 나온 문자가 나온 횟수가 같을 때
            if (cnt[s[i]] == cnt[_s]) {
                return i;
            }

        }
    }

    // 같은 횟수가 한번도 안 나온 경우
    return 0;
}

int solution(string s) {
    int answer = 0;

    char _s = s[0];
    int _end = 1;
    int _size = s.size();
    int cnt_x = 1;
    int cnt_y = 0;

    while (1) {
        _size = s.size();
        _s = s[0];
        cnt_x = 1;
        cnt_y = 0;
        if (_size == 0) { break; }
        if (_size == 1) { answer++; break; }

        for (int i = 1; i < _size; i++) {
            if (s[i] == _s) {
                cnt_x++;
            }
            else {
                cnt_y++;
            }

            if (cnt_x == cnt_y) {
                s = s.substr(i + 1);
                answer++;
                break;
            }
        }
        
    }

    

    if (answer == 0) { answer++; }

    return answer;
}

int main() {

    string s;



    //s = "banana";



    //s = "abracadabra";



    s = "aaabbaccccabba";

    
    
    int answer = solution(s);

    cout << answer;

    return 0;
}
