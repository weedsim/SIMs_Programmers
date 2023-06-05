#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;

    int _count = sizes.size();

    int _maxW = 0;
    int _maxH = 0;
    for (int i = 0; i < _count; i++) {
        int w = sizes[i][0];
        int h = sizes[i][1];
        if (w < h) {
            int temp = w;
            w = h;
            h = temp;
        }
        if (_maxW < w) { _maxW = w; }
        if (_maxH < h) { _maxH = h; }
    }
    answer = _maxW * _maxH;

    return answer;
}

int main() {

    vector<vector<int>> sizes;
    vector<int> temp;



    //temp.push_back(60);
    //temp.push_back(50);
    //sizes.push_back(temp);
    //temp.clear();
    //temp.push_back(30);
    //temp.push_back(70);
    //sizes.push_back(temp);
    //temp.clear();
    //temp.push_back(60);
    //temp.push_back(30);
    //sizes.push_back(temp);
    //temp.clear();
    //temp.push_back(80);
    //temp.push_back(40);
    //sizes.push_back(temp);



    //temp.push_back(10);
    //temp.push_back(7);
    //sizes.push_back(temp);
    //temp.clear();
    //temp.push_back(12);
    //temp.push_back(3);
    //sizes.push_back(temp);
    //temp.clear();
    //temp.push_back(8);
    //temp.push_back(15);
    //sizes.push_back(temp);
    //temp.clear();
    //temp.push_back(14);
    //temp.push_back(7);
    //sizes.push_back(temp);
    //temp.clear();
    //temp.push_back(5);
    //temp.push_back(15);
    //sizes.push_back(temp);



    temp.push_back(14);
    temp.push_back(4);
    sizes.push_back(temp);
    temp.clear();
    temp.push_back(19);
    temp.push_back(6);
    sizes.push_back(temp);
    temp.clear();
    temp.push_back(6);
    temp.push_back(16);
    sizes.push_back(temp);
    temp.clear();
    temp.push_back(18);
    temp.push_back(7);
    sizes.push_back(temp);
    temp.clear();
    temp.push_back(7);
    temp.push_back(11);
    sizes.push_back(temp);


    
    int answer = solution(sizes);

    cout << answer;

    return 0;
}
