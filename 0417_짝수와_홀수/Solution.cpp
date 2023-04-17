#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



string solution(int num) {
    // 짝수이면
    if (num % 2 == 0) {
        return "Even";
    }
    // 홀수 이면
    else {
        return "Odd";
    }

}

int main() {

    int n;
    cin >> n;

    string ans = solution(n);

    cout << ans;
    
    return 0;
}