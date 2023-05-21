#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int _size = s.size();
    int id = 0;
    for(int i = 0; i < _size; i++){
        if(s[i] == ' '){
            id = 0;
            answer += s[i];
            continue;
        }
        if(id % 2 == 0){
            if(s[i] >= 'a' && s[i] <= 'z'){
                answer += (s[i] + 'A' - 'a');
            }
            else{
                answer += s[i];
            }
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z'){
                answer += (s[i] - 'A' + 'a');
            }
            else{
                answer += s[i];
            }
        }
        id++;
    }

    return answer;
}
