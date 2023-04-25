#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int cnt = 0;
    while(!arr.empty()){
        answer += (double)(arr.back());
        arr.pop_back();
        cnt++;
    }
    answer /= cnt;
    return answer;
}