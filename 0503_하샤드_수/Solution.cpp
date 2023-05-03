#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int before, next;
    before = x;
    next = 0;
    while(x != 0){
        next += (x % 10);
        x /= 10;
    }
    if(before % next == 0){
        answer = true;
    }
    else{
        answer = false;
    }
    return answer;
}