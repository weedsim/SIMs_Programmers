#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    int report_size = report.size();
    // 신고한 사람
    vector<string> reporters;
    // 신고 받은 사람
    vector<string> receives;

    // 겹치는 report를 지운 진짜
    vector<string> right_report;

    // 첫 번째는 그냥 넣어준다.
    right_report.push_back(report.back());
    report.pop_back();
    
    while(!report.empty()) {
        // 겹치는 게 없는
        if(find(right_report.begin(), right_report.end(), report.back()) == right_report.end()){
            right_report.push_back(report.back());
        }
        report.pop_back();
    }

    // right_report 의 요소들을 reporters랑 receives에 나누어 넣어준다.
    while(!right_report.empty()){
        istringstream ss(right_report.back());
        string a;
        
        // right_report.back() 에서 신고한 사람과 신고 받은사람을 나눈다.
        while(getline(ss, a, ' ')){
            // reporters와 receives의 크기가 같으면 신고한 사람부터 
            if(reporters.size() == receives.size()) {
                reporters.push_back(a);
            }
            else {
                receives.push_back(a);
            }
        }

        right_report.pop_back();
    }

    // 누가 몇번 신고 당했는지
    int receive_count[1001] = {0,};
    
    // 신고한 것들 중 몇 명이 정지 되었는지, 인덱스가 신고한 사람의 인덱스이고, value가 정지시킨 횟수이다.
    int report_count[1001] = {0,};

    int receive_size = receives.size();
    int id_size = id_list.size();

    // j가 신고 받은 사람의 인덱스 값이고, i가 원래 있던 right_report의 인덱스이다.
    for(int i = 0; i < receive_size; i++) {
        int j = find(id_list.begin(), id_list.end(), receives.at(i)) - id_list.begin();
        receive_count[j]++;
    }

    for(int i = 0; i < receive_size; i++) {
        // 신고 받은 횟수가 기준치를 넘는 사람 -> i 가 신고 받은 사람 id의 인덱스
        if(receive_count[i] >= k){
            // j가 right_report 의 인덱스이다.
            int j = find(receives.begin(), receives.end(), id_list.at(i)) - receives.begin();
            // k가 신고한 사람의 인덱스이다.
            int k = find(id_list.begin(), id_list.end(), reporters.at(j)) - id_list.begin();

            report_count[k]++;
        }
    }

    for(int i = 0; i < id_size; i++){
        answer.push_back(report_count[i]);
    }

    return answer;
}