#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string StepOne(string new_id) {
    int _size = new_id.size();
    for (int i = 0; i < _size; i++) {
        if (new_id[i] >= 'A' && new_id[i] <= 'Z') {
            new_id[i] = new_id[i] - 'A' + 'a';
        }
    }
    return new_id;
}

string StepTwo(string new_id) {
    int _size = new_id.size();
    vector<int> cut;

    for (int i = 0; i < _size; i++) {
        if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9') || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.') {
            continue;
        }
        else {
            cut.push_back(i);
        }
    }

    while (!cut.empty()) {
        int i = cut.back();
        cut.pop_back();
        string One = new_id.substr(0, i);
        string Two;
        if (i == new_id.size()) {
            new_id = One;
        }
        else {
            Two = new_id.substr(i + 1);
            new_id = One + Two;
        }
    }

    return new_id;
}

string StepThree(string new_id) {
    int _size = new_id.size();
    vector<int> cut;

    for (int i = 0; i < _size - 1; i++) {
        if (new_id[i] == '.') {
            if (new_id[i + 1] == '.') {
                cut.push_back(i);
            }
        }
    }

    while (!cut.empty()) {
        int temp = cut.back();
        cut.pop_back();

        string One = new_id.substr(0, temp);
        string Two;
        if (temp == (new_id.size() - 2)) {
            new_id = One + '.';
        }
        else {
            Two = new_id.substr(temp + 2);
            new_id = One + '.' + Two;
        }
    }
    return new_id;
}

string StepFour(string new_id) {
    if (new_id[0] == '.') {
        new_id = new_id.substr(1);
    }

    int _size = new_id.size();

    if (_size > 0 && new_id[_size - 1] == '.') {
        new_id = new_id.substr(0, _size - 1);
    }

    return new_id;
}

string StepFive(string new_id) {
    
    if (new_id.empty()) {
        new_id = 'a';
    }

    return new_id;
}

string StepSix(string new_id) {
    int _size = new_id.size();

    if (_size > 15) {
        new_id = new_id.substr(0, 15);
    }

    _size = new_id.size();
    
    if (new_id[_size - 1] == '.') {
        new_id = new_id.substr(0, _size - 1);
    }

    return new_id;
}

string StepSeven(string new_id) {
    int _size = new_id.size();

    if (_size <= 2) {
        new_id += new_id[_size - 1];
        _size++;
    }

    if (_size <= 2) {
        new_id += new_id[_size - 1];
        _size++;
    }

    return new_id;
}


string solution(string new_id) {
    string answer = "";

    new_id = StepOne(new_id);

    new_id = StepTwo(new_id);

    new_id = StepThree(new_id);

    new_id = StepFour(new_id);

    new_id = StepFive(new_id);

    new_id = StepSix(new_id);

    new_id = StepSeven(new_id);

    answer = new_id;

    return answer;
}

int main() {

    string new_id;



    new_id = "...!@BaT#*..y.abcdefghijklm";



    //new_id = "z-+.^.";



    //new_id = "=.=";



    //new_id = "123_.def";



    //new_id = "abcdefghijklmn.p";



    string answer = solution(new_id);

    cout << answer;

    return 0;
}