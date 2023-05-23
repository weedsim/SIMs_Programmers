#include <string>
#include <vector>
#include <map>

using namespace std;

string _todayYear;
string _todayMonth;
string _todayDay;

int checkTime(string _priYear, string _priMonth, string _priDay){ // 파기해야하면 0으로 리턴, 파기 안해도 되면 1로 리턴
    if( stoi(_priYear) > stoi(_todayYear)){
        return 0;
    }
    else if( stoi(_priMonth) > stoi(_todayMonth)){
        return 0;
    }
    else if( stoi(_priDay) > stoi(_todayDay)){
        return 0;
    }
    else{
        return 1;
    }
}

string addTime(string _pri, string _termMonth){
    string result;
    int TermMonth = stoi(_termMonth);
    string _priYear = _pri.substr(0, 4);
    string _priMonth = _pri.substr(5, 2);
    string _priDay = _pri.substr(8, 2);
    int PriYear = stoi(_priYear);
    int PriMonth = stoi(_priMonth);
    int PriDay = stoi(_priDay);
    if(PriDay == 1){
        PriMonth -= 1;
        PriDay = 28;
    }
    if(PriMonth + TermMonth > 12){
        PriYear += 1;
        PriMonth -= 12;
    }
    PriMonth += TermMonth;
    _priYear = to_string(PriYear);
    if(PriMonth < 10){
        _priMonth = "0";
    }
    if(PriDay < 10){
        _priDay = "0";
    }
    _priMonth = to_string(PriMonth);
    _priDay = to_string(PriDay);
    result += _priYear;
    result += ".";
    result += _priMonth;
    result += ".";
    result += _priDay;
    return result;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    _todayYear = today.substr(0, 4);
    _todayMonth = today.substr(5, 2);
    _todayDay = today.substr(8, 2);
    
    map<string, string> termsMap;
    while(!terms.empty()){
        string temp = terms.back();
        terms.pop_back();
        string _key = temp.substr(0, 1);
        string _value = temp.substr(2);
        termsMap[_key] = _value;
    }

    int idx = 0;
    while(!privacies.empty()){
        idx++;
        string Pri = privacies.back();
        privacies.pop_back();
        string _pri = Pri.substr(0, 10);
        string _term = Pri.substr(11);

        string _termMonth = termsMap[_term];

        _pri = addTime(_pri, _termMonth);

        string _priYear = _pri.substr(0, 4);
        string _priMonth = _pri.substr(5, 2);
        string _priDay = _pri.substr(8, 2);
        int ans = checkTime(_priYear, _priMonth, _priDay);
        if(ans == 1){
            answer.push_back(idx);
        }
    }
    return answer;
}