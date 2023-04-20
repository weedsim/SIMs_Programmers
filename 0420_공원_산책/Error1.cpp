#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int sizeX = park.at(0).length();
    int sizeY = park.size();
    int X = 0;
    int Y = 0;
    int CNT = routes.size();
    for(int i=0; i< CNT; i++){
        string a = routes.at(i);
        int num = ((int)((a[2])) - 48);
        if(a[0] == 'E'){ // 동쪽으로 -> X는 + 1, Y는 그대로
            // 맵을 벗어나면 넘어가기 
            if(X + num > sizeX){
                continue;
            }
            // 목적지까지 가는 중에 장애물이 있으면
            bool rock = false;
            for(int t = 0; t <= num; t++){
                if((park.at(Y))[X + t] == 'X'){
                    rock = true;
                    continue;
                }
            }
            // 돌이 있으면
            if(rock){
                continue;
            }
            X += num;
        }
        else if(a[0] == 'W'){ // 서쪽으로 -> X는 - 1, Y는 그대로
            // 맵을 벗어나면 넘어가기 
            if(X - num < 0){
                continue;
            }
            // 목적지까지 가는 중에 장애물이 있으면
            bool rock = false;
            for(int t = 0; t <= num; t++){
                if((park.at(Y))[X - t] == 'X'){
                    rock = true;
                    continue;
                }
            }
            // 돌이 있으면
            if(rock){
                continue;
            }
            X -= num;
        }
        else if(a[0] == 'N'){ // 북쪽으로 -> X는 그대로, Y는 - 1
            // 맵을 벗어나면 넘어가기 
            if(Y - num < 0){
                continue;
            }
            // 목적지까지 가는 중에 장애물이 있으면
            bool rock = false;
            for(int t = 0; t <= num; t++){
                if((park.at(Y - t))[X] == 'X'){
                    rock = true;
                    continue;
                }
            }
            // 돌이 있으면
            if(rock){
                continue;
            }
            Y -= num;
        }
        else if(a[0] == 'S'){ // 남쪽으로 -> X는 그대로, Y는 + 1
            // 맵을 벗어나면 넘어가기 
            if(Y + num > sizeY){
                continue;
            }
            bool rock = false;
            for(int t = 0; t <= num; t++){
                if((park.at(Y + t))[X] == 'X'){
                    rock = true;
                    continue;
                }
            }
            // 돌이 있으면
            if(rock){
                continue;
            }
            Y += num;
        }
    }
    
    answer.push_back(Y);
    answer.push_back(X);

    return answer;
}