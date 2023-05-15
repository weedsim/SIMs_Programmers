#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int Size = s.size();
    if(Size == 4 || Size == 6){
        for(int i = 0; i < Size; i++){
            if(s[i] >= '0' && s[i] <= '9'){ answer = true; }
            else{ answer = false; break; }
        }
    }
    else{ answer = false; }
    
    return answer;
}
