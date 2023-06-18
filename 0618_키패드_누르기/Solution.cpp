#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int _size = numbers.size();
    int L = 10;
    int R = 11;

    // pair 첫 인자는 x 좌표, 두 번째 인자는 y 좌표이다. 
    map<int, pair<int, int>> pad;
    pad[0] = { 1, 3 };
    pad[1] = { 0, 0 };
    pad[2] = { 1, 0 };
    pad[3] = { 2, 0 };
    pad[4] = { 0, 1 };
    pad[5] = { 1, 1 };
    pad[6] = { 2, 1 };
    pad[7] = { 0, 2 };
    pad[8] = { 1, 2 };
    pad[9] = { 2, 2 };
    pad[10] = { 0, 3 };
    pad[11] = { 2, 3 };

    for (int i = 0; i < _size; i++) {
        int temp = numbers[i];
        if (temp == 1 || temp == 4 || temp == 7) {
            answer += "L";
            L = temp;
        }
        else if (temp == 3 || temp == 6 || temp == 9) {
            answer += "R";
            R = temp;
        }
        else {
            int rc = abs(pad[temp].first - pad[R].first) + abs(pad[temp].second - pad[R].second);
            int lc = abs(pad[temp].first - pad[L].first) + abs(pad[temp].second - pad[L].second);
            if (rc == lc) {
                if (hand == "right") {
                    answer += "R";
                    R = temp;
                }
                else {
                    answer += "L";
                    L = temp;
                }
            }
            else if (rc < lc) {
                answer += "R";
                R = temp;
            }
            else {
                answer += "L";
                L = temp;
            }
        }
    }

    return answer;
}

int main() {

    vector<int> numbers;
    string hand;



    //numbers.push_back(1);
    //numbers.push_back(3);
    //numbers.push_back(4);
    //numbers.push_back(5);
    //numbers.push_back(8);
    //numbers.push_back(2);
    //numbers.push_back(1);
    //numbers.push_back(4);
    //numbers.push_back(5);
    //numbers.push_back(9);
    //numbers.push_back(5);
    //hand = "right";



    numbers.push_back(7);
    numbers.push_back(0);
    numbers.push_back(8);
    numbers.push_back(2);
    numbers.push_back(8);
    numbers.push_back(3);
    numbers.push_back(1);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(6);
    numbers.push_back(2);
    hand = "left";



    //numbers.push_back(1);
    //numbers.push_back(2);
    //numbers.push_back(3);
    //numbers.push_back(4);
    //numbers.push_back(5);
    //numbers.push_back(6);
    //numbers.push_back(7);
    //numbers.push_back(8);
    //numbers.push_back(9);
    //numbers.push_back(0);
    //hand = "right";


    
    string answer = solution(numbers, hand);

    cout << answer;

    return 0;
}