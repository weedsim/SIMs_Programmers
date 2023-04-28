#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int pCnt = 0;
    int yCnt = 0;
    int size = s.size();
    for(int i = 0; i < size; i++){
        if(s[i] == 'p' || s[i] == 'P'){
            pCnt++;
        }
        else if(s[i] == 'y' || s[i] == 'Y'){
            yCnt++;
        }
    }

    if(pCnt == yCnt){
        answer = true;
    }
    else{
        answer = false;
    }

    return answer;
}