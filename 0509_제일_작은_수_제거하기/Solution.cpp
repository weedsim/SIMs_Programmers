#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int whoMin;
    int Min = 2134567890;

    answer = arr;

    while(!arr.empty()){
        if(arr.back() < Min){
            Min = arr.back();
            whoMin = arr.size() - 1;
        }
        arr.pop_back();
    }

    answer.erase(answer.begin() + whoMin);

    if(answer.empty()){ answer.push_back(-1); }

    return answer;
}