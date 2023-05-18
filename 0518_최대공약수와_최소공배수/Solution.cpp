#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    int temp;
    while(b != 0){
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    if(n >= m) { 
        answer.push_back(gcd(n, m)); 
        answer.push_back(lcm(n, m));
    }
    else { 
        answer.push_back(gcd(m, n));
        answer.push_back(lcm(m, n));
    }

    return answer;
}
