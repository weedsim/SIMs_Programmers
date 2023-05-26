#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> _map;
    _map['R'] = 0;
    _map['T'] = 0;
    _map['C'] = 0;
    _map['F'] = 0;
    _map['J'] = 0;
    _map['M'] = 0;
    _map['A'] = 0;
    _map['N'] = 0;
    while (!survey.empty()) {
        string temp = survey.back();
        survey.pop_back();
        int _choice = choices.back();
        choices.pop_back();
        if (_choice > 4) {
            _map[temp[1]] += (_choice - 4);
        }
        else if (_choice < 4) {
            _map[temp[0]] += (4 - _choice);
        }
    }

    // R, T
    if (_map['R'] >= _map['T']) {
        answer += "R";
    }
    else {
        answer += "T";
    }

    // C, F
    if (_map['C'] >= _map['F']) {
        answer += "C";
    }
    else {
        answer += "F";
    }

    // J, M
    if (_map['J'] >= _map['M']) {
        answer += "J";
    }
    else {
        answer += "M";
    }

    // A, N
    if (_map['A'] >= _map['N']) {
        answer += "A";
    }
    else {
        answer += "N";
    }

    return answer;
}

int main() {

    vector<string> survey;
    vector<int> choices;
    
    //survey.push_back("AN");
    //survey.push_back("CF");
    //survey.push_back("MJ");
    //survey.push_back("RT");
    //survey.push_back("NA");

    //choices.push_back(5);
    //choices.push_back(3);
    //choices.push_back(2);
    //choices.push_back(7);
    //choices.push_back(5);




    survey.push_back("TR");
    survey.push_back("RT");
    survey.push_back("TR");

    choices.push_back(7);
    choices.push_back(1);
    choices.push_back(3);




    string answer = solution(survey, choices);

    cout << answer;
    
    
    return 0;
}