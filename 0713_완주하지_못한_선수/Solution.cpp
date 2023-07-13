#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    int _size = completion.size();

    for (int i = 0; i < _size; i++) {
        if (participant[i] != completion[i]) {
            answer = participant[i];
            break;
        }
    }

    if (answer == "") {
        answer = participant[_size];
    }

    return answer;
}

int main() {

    vector<string> participant;
    vector<string> completion;



    //participant.push_back("leo");
    //participant.push_back("kiki");
    //participant.push_back("eden");
    //completion.push_back("eden");
    //completion.push_back("kiki");



    //participant.push_back("marina");
    //participant.push_back("josipa");
    //participant.push_back("nikola");
    //participant.push_back("vinko");
    //participant.push_back("filipa");
    //completion.push_back("josipa");
    //completion.push_back("filipa");
    //completion.push_back("marina");
    //completion.push_back("nikola");



    participant.push_back("mislav");
    participant.push_back("stanko");
    participant.push_back("mislav");
    participant.push_back("ana");
    completion.push_back("stanko");
    completion.push_back("ana");
    completion.push_back("mislav");

    
    
    string answer = solution(participant, completion);

    cout << answer;

    return 0;
}
