#include <vector>
#include <string>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    int Size = absolutes.size();

    for(int i=0; i<Size; i++){
        if(signs.at(i)){
            answer += absolutes.at(i);
        }
        else{
            answer -= absolutes.at(i);
        }
    }

    return answer;
}
