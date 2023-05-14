using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long need = 0;
    for(int i = 1; i <= count; i++){
        need += (price * i);
    }

    if(need <= money) { answer = 0; }
    else{answer = need - money;}
    return answer;
}
