#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    int _size = d.size();
    int all = 0;
    int _max;
    for(int i = 0; i < _size; i++){
        all += d[i];
        if(all > budget){
            all -= d[i];
            _max = i;
            break;
        }
    }
    answer = _max;
    return answer;
}
