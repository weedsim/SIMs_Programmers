#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


// 프로그래머스에 쓰는 정답 부분 이라고 보면 됩니다.
int solution(int n) {
    // 나머지가 1이라면 n에서 1을 뺀 값에서 약수 중 1을 제외한 가장 작은 값을 찾으면 되는 문제이다.
    int before = n - 1;
    int ans = before;

    // 왜 for (int i = 2; < before; i++) 에거 before / 2를 하게되었는가?
    // 먼저 약수가 될 수 있는 가장 작은 수는 1이지만 , 1은 자기 자신과 세트이기에 그 다음 수인 2이기에 before의 절반까지만 확인하면 충분한 것이다. 
    for (int i = 2; i <= (before / 2); i++) {
        if ((before % i) == 0) {
            if (ans > i) {
                ans = i;
            }
        }
    }

    return ans;

}

int main() {

    int n;
    cin >> n;

    int ans = solution(n);

    cout << ans;
    
    return 0;
}