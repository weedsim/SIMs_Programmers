#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    answer += "김서방은 ";
    int n = 0;
    n = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    answer += to_string(n);

    answer += "에 있다";
    return answer;
}