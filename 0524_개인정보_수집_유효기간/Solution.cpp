#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string _todayYear;
string _todayMonth;
string _todayDay;

bool checkTime(string _priYear, string _priMonth, string _priDay) { // 파기해야하면 false으로 리턴, 파기 안해도 되면 true로 리턴
    if (stoi(_priYear) > stoi(_todayYear)) {
        return true;
    }
    else if (stoi(_priYear) == stoi(_todayYear)) {
        if (stoi(_priMonth) > stoi(_todayMonth)) {
            return true;
        }
        else if (stoi(_priMonth) == stoi(_todayMonth)) {
            if (stoi(_priDay) < stoi(_todayDay)) {
                return false;
            }
            else {
                return true;
            }
        }
        else { return false; }
    }
    else { return false; }
}

string addTime(string _pri, string _termMonth) {
    string result;
    result = "";
    int TermMonth = stoi(_termMonth);
    string _priYear = _pri.substr(0, 4);
    string _priMonth = _pri.substr(5, 2);
    string _priDay = _pri.substr(8, 2);
    int PriYear = stoi(_priYear);
    int PriMonth = stoi(_priMonth);
    int PriDay = stoi(_priDay);
    PriDay -= 1;
    PriMonth += TermMonth;
    if (PriDay == 0) {
        PriMonth -= 1;
        PriDay = 28;
    }
    if (PriMonth > 12) {
        PriYear += (PriMonth - 1) / 12;
        PriMonth = ((PriMonth - 1) % 12) + 1;
    }
    _priYear = to_string(PriYear);
    if (PriMonth < 10) {
        _priMonth = "0";
    }
    else {
        _priMonth = "";
    }
    if (PriDay < 10) {
        _priDay = "0";
    }
    else {
        _priDay = "";
    }
    _priMonth += to_string(PriMonth);
    _priDay += to_string(PriDay);
    result += _priYear;
    result += ".";
    result += _priMonth;
    result += ".";
    result += _priDay;
    return result;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    answer.clear();
    _todayYear = today.substr(0, 4);
    _todayMonth = today.substr(5, 2);
    _todayDay = today.substr(8, 2);

    map<string, string> termsMap;
    while (!terms.empty()) {
        string temp = terms.back();
        terms.pop_back();
        string _key = temp.substr(0, 1);
        string _value = temp.substr(2);
        termsMap[_key] = _value;
    }

    int idx = 0;
    while (!privacies.empty()) {
        idx = privacies.size();
        string Pri = privacies.back();
        privacies.pop_back();
        string _pri = Pri.substr(0, 10);
        string _term = Pri.substr(11);

        string _termMonth = termsMap[_term];

        _pri = addTime(_pri, _termMonth);

        string _priYear = _pri.substr(0, 4);
        string _priMonth = _pri.substr(5, 2);
        string _priDay = _pri.substr(8, 2);
        bool ans = checkTime(_priYear, _priMonth, _priDay);
        if (!ans) {
            answer.push_back(idx);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}

int main() {

    //string today = "2022.05.19";
    //vector<string> terms;
    //terms.push_back("A 6");
    //terms.push_back("B 12");
    //terms.push_back("C 3");
    //vector<string> privacies;
    //privacies.push_back("2021.05.02 A");
    //privacies.push_back("2021.07.01 B");
    //privacies.push_back("2022.02.19 C");
    //privacies.push_back("2022.02.20 C");



    string today = "2020.01.01";
    vector<string> terms;
    terms.push_back("Z 3");
    terms.push_back("D 5");
    vector<string> privacies;
    privacies.push_back("2019.01.01 D");
    privacies.push_back("2019.11.15 Z");
    privacies.push_back("2019.08.02 D");
    privacies.push_back("2019.07.01 D");
    privacies.push_back("2018.12.28 Z");

    vector<int> ans;
    ans = solution(today, terms, privacies);
    cout << ans.back();
    cout << ans.size();
    ans.pop_back();
    cout << ans.back();
    ans.pop_back();
    cout << ans.back();

    
    return 0;
}
