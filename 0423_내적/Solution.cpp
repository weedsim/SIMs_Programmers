#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    while(!a.empty()){
        int A = a.back();
        int B = b.back();
        a.pop_back();
        b.pop_back();
        answer += (A * B);
    }
    return answer;
}