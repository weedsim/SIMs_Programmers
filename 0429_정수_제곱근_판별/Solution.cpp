#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int an = sqrt(n);
    long long b = pow(an, 2);
    if(n == b){
        answer = pow((an + 1), 2);
    }
    else{
        answer = -1;
    }
    return answer;
}