#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    // 처음 0 부터 9 까지 다 더하면 45이다.
    int answer = 45;

    // numbers는 벡터이기에 빌때까지 들어있는 수를 전부 빼면 된다.
    while(!numbers.empty()){
        answer -= numbers.back();
        numbers.pop_back();
    }
    
    return answer;
}