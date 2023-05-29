#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;

    reverse(ingredient.begin(), ingredient.end());
    string teb;

    while (!ingredient.empty()) {
        teb += to_string(ingredient.back());
        ingredient.pop_back();

        if (teb.size() >= 4) {
            string temp = teb.substr(teb.size() - 4);
            if (temp == "1231") {
                string tebp = teb.substr(0, teb.size() - 4);
                teb = tebp;
                answer++;
            }
        }

    }

    return answer;
}
