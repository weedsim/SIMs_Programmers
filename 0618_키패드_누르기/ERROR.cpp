#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int _size = numbers.size();
    int L = 10;
    int R = 10;

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
            double rc, lc;
            if (temp == 2) {
                if (L == 1) {
                    lc = 1;
                }
                else if (L == 4) {
                    lc = 1.4;
                }
                else if (L == 7) {
                    lc = 2.2;
                }
                else if (L == 10) {
                    lc = 3.1;
                }
                else if (L == 2) {
                    lc = 0;
                }
                else if (L == 5) {
                    lc = 1;
                }
                else if (L == 8) {
                    lc = 2;
                }
                else if (L == 0) {
                    lc = 3;
                }

                if (R == 3) {
                    rc = 1;
                }
                else if (R == 6) {
                    rc = 1.4;
                }
                else if (R == 9) {
                    rc = 2.2;
                }
                else if (R == 10) {
                    rc = 3.1;
                }
                else if (R == 2) {
                    rc = 0;
                }
                else if (R == 5) {
                    rc = 1;
                }
                else if (R == 8) {
                    rc = 2;
                }
                else if (R == 0) {
                    rc = 3;
                }

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
            else if (temp == 5) {
                if (L == 1) {
                    lc = 1.4;
                }
                else if (L == 4) {
                    lc = 1;
                }
                else if (L == 7) {
                    lc = 1.4;
                }
                else if (L == 10) {
                    lc = 2.2;
                }
                else if (L == 2) {
                    lc = 1;
                }
                else if (L == 5) {
                    lc = 0;
                }
                else if (L == 8) {
                    lc = 1;
                }
                else if (L == 0) {
                    lc = 2;
                }

                if (R == 3) {
                    rc = 1.4;
                }
                else if (R == 6) {
                    rc = 1;
                }
                else if (R == 9) {
                    rc = 1.4;
                }
                else if (R == 10) {
                    rc = 2.2;
                }
                else if (R == 2) {
                    rc = 1;
                }
                else if (R == 5) {
                    rc = 0;
                }
                else if (R == 8) {
                    rc = 1;
                }
                else if (R == 0) {
                    rc = 2;
                }

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
            else if (temp == 8) {
                if (L == 1) {
                    lc = 2.2;
                }
                else if (L == 4) {
                    lc = 1.4;
                }
                else if (L == 7) {
                    lc = 1;
                }
                else if (L == 10) {
                    lc = 1.4;
                }
                else if (L == 2) {
                    lc = 2;
                }
                else if (L == 5) {
                    lc = 1;
                }
                else if (L == 8) {
                    lc = 0;
                }
                else if (L == 0) {
                    lc = 1;
                }

                if (R == 3) {
                    rc = 2.2;
                }
                else if (R == 6) {
                    rc = 1.4;
                }
                else if (R == 9) {
                    rc = 1;
                }
                else if (R == 10) {
                    rc = 1.4;
                }
                else if (R == 2) {
                    rc = 2;
                }
                else if (R == 5) {
                    rc = 1;
                }
                else if (R == 8) {
                    rc = 0;
                }
                else if (R == 0) {
                    rc = 1;
                }

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
            else if (temp == 0) {
                if (L == 1) {
                    lc = 3.1;
                }
                else if (L == 4) {
                    lc = 2.2;
                }
                else if (L == 7) {
                    lc = 1.4;
                }
                else if (L == 10) {
                    lc = 1;
                }
                else if (L == 2) {
                    lc = 3;
                }
                else if (L == 5) {
                    lc = 2;
                }
                else if (L == 8) {
                    lc = 1;
                }
                else if (L == 0) {
                    lc = 0;
                }

                if (R == 3) {
                    rc = 3.1;
                }
                else if (R == 6) {
                    rc = 2.2;
                }
                else if (R == 9) {
                    rc = 1.4;
                }
                else if (R == 10) {
                    rc = 1;
                }
                else if (R == 2) {
                    rc = 3;
                }
                else if (R == 5) {
                    rc = 2;
                }
                else if (R == 8) {
                    rc = 1;
                }
                else if (R == 0) {
                    rc = 0;
                }

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
    }

    return answer;
}
