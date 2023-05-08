#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int i = 0;
    while(!phone_number.empty()){
        i++;
        if(i > 4){
            answer.push_back('*');
            phone_number.pop_back();
        }
        else{
            answer.push_back(phone_number.back());
            phone_number.pop_back();
        }
    }
    reverse(answer.begin(), answer.end());
    return answer;
}