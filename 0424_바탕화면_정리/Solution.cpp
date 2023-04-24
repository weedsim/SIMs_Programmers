#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    //  좌표의 최소값과 최댓값을 각각을 찾아야한다.
    int minX, minY, maxX, maxY;
    minX = 213456789;
    minY = 213456789;
    maxX = 0;
    maxY = 0;

    // vector 상태로는 바탕화면의 상태를 쉽게 알기 어려워서 배열로 할 것임
    int map[51][51] = { 0, };
    
    // vector 의 정확한 길이를 모르기에 size를 찾는다.
    int mapSizeY = wallpaper.size();
    int mapSizeX = wallpaper.at(0).size();

    for(int i = mapSizeY - 1; i >= 0; i--)
    {
        string X = wallpaper.at(i);
        for(int j = 0; j < mapSizeX; j++){
            if(X[j] == '.'){
                map[i][j] = 1;
            }
            else {
                map[i][j] = 2;
            }
        }
        wallpaper.pop_back();
    }

    // 이제 2차원 배열에서 2인 부분을 찾아서 최소 x, y, 최대 x, y를 찾아주면 된다.
    for(int j = 0; j < mapSizeY; j++){// y
        for(int i = 0; i < mapSizeX; i++){ // x
            if(map[j][i] == 2){
                if(maxY < j){
                    maxY = j;
                }
                if(maxX < i){
                    maxX = i;
                }
                if(minY > j){
                    minY = j;
                }
                if(minX > i){
                    minX = i;
                }
            }
        }
    }

    answer.push_back(minY);
    answer.push_back(minX);
    answer.push_back(maxY + 1);
    answer.push_back(maxX + 1);

    return answer;
}