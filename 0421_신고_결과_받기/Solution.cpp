#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    
    // report의 사이즈
    int report_size = report.size();

    // id_list의 사이즈
    int id_size = id_list.size();
    
    vector<int> answer(id_size, 0);

    map<string, int> id_idx_list;

    for(int i = 0 ; i < id_size; i++){
        id_idx_list[id_list.at(i)] = i;
    }

    // report 를 map으로, 키 값은 신고 받은 사람의 id로 , value 는 set으로 중복으로 받으면 무시하기 위해 
    map<string, set<string>> report_map;

    // report_map 에 입력
    for(int i = 0; i < report_size; i++){
        int space = report.at(i).find(' ');
        string reporter = report.at(i).substr(0, space);
        string receiver = report.at(i).substr(space + 1);
        report_map[receiver].insert(reporter);
    }

    for(int i = 0; i < id_size; i++){
        // 신고를 k번 이상 받았을 때
        int num = report_map[id_list.at(i)].size();
        if(num >= k){
            for(auto j : report_map[id_list.at(i)]){
                answer.at(id_idx_list[j])++;
            }
        }
    }

    return answer;
}