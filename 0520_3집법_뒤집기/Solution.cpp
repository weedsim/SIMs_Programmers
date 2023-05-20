#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;

    vector<int> vec;
    while(n != 0){
        vec.push_back(n % 3);
        n /= 3;
    }

    int t = 0;
    while(!vec.empty()){
        answer += (vec.back() * pow(3, t));
        t++;
        vec.pop_back();
    }

    return answer;
}
