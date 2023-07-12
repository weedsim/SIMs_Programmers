#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    char _s = s[0];
    int _end = 1;
    int _size = s.size();
    int cnt_x = 1;
    int cnt_y = 0;

    while (!s.empty()) {
        _s = s[0];
        _size = s.size();
        cnt_x = 1;
        cnt_y = 0;

        for (int i = 1; i < _size; i++) {
            // 첫 문자랑 같으면
            if (s[i] == _s) {
                cnt_x++;
            }
            // 다르면
            else {
                cnt_y++;
            }

            // 첫 문자 나온 횟수랑 그 외의 문자가 나온 횟수가 같으면
            if (cnt_x == cnt_y) {
                s = s.substr(i + 1);
                answer++;
                break;
            }
        }

        // 첫 문자가 그 외의 문자보다 많은 상황일떄
        if (cnt_x > cnt_y) { 
            answer++; 
            break;
        }
        
    }

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
