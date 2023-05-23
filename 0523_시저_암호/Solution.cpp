#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    int _size = s.size();

    for(int i = 0; i < _size; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if((s[i] + n) > 'z'){
                s[i] += (n - 'z' + 'a' - 1);
            }
            else{
                s[i] += n;
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += n;
            if(s[i] > 'Z'){
                s[i] -= ('Z' - 'A' + 1);
            }
        }
    }

    answer = s;

    return answer;
}
