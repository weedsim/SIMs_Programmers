#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    int Size = arr1.size();
    int insideSize = arr1[0].size();

    for(int i = 0; i < Size; i++){
        vector<int> tempAnswer;
        for(int j = 0; j < insideSize; j++){
            tempAnswer.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(tempAnswer);
    }
    
    return answer;
}
