#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    int report_size = report.size();
    // 신고한 사람
    vector<string> reporters;
    // 신고 받은 사람
    vector<string> receives;

    // report 의 크기를 이용해서 report 안에 있는 내용을 띄어쓰기를 기준으로 파싱, 차후에 report의 요소가 완전히 겹치는 부분이 있는지 확인이 필요하다.
    for(int i = 0; i < report_size; i++){
        istringstream reported_stream(report.at(i));
        string a;
        while(getline(reported_stream, a, ' ')){
            if(reporters.size() == receives.size()){
                reporters.push_back(a);
            }
            else{
                receives.push_back(a);
            }
        }
    }

    // report 안에 내용물이 같은게 있는지 찾기

    auto it = find(report.begin(), report.end(), report.at(0));
    while(it != report.end()){
        return (int)(it - report.begin());
    }

    // return answer;
}