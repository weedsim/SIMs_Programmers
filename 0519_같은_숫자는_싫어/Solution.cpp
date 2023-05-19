#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int before = -1;
    while(!arr.empty()){
        if(arr.back() != before) { 
            before = arr.back();
            answer.push_back(arr.back());
        }
        arr.pop_back();
    }

    reverse(answer.begin(), answer.end());

    return answer;
}
