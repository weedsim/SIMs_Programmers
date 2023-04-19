#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    // 시간 신경 안 쓰고 바로 나누어 봐서 나머지가 0이 되면 약수라는 의미이기에 답에 직접 더하였다.
    for(int i = 1; i <= n; i++){
        if(n % i==0){
            answer += i;
        }
    }
    
    return answer;
}