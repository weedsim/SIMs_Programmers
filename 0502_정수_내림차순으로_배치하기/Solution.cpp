#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    int a[10];

    // 몇 자리 숫자인지
    int i = 0;

    while(n != 0){
        a[i] = (n % 10);
        n /= 10;
        i++;
    }

    sort(a, a + i);

    i--;
    answer += a[i];

    for(int j = i - 1; j >= 0; j--){
        answer *= 10;
        answer += a[j];
    }

    return answer;
}