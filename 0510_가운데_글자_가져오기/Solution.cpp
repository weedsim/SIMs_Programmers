#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int Size = s.size();
    // 짝수
    if(Size % 2 == 0){
        answer += s[(Size / 2) - 1];
    }
    answer += s[Size / 2];
    return answer;
}