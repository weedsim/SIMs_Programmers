# 시저 암호

### 문제 설명

어떤 문장의 각 알파벳을 일정한 거리만큼 밀어서 다른 알파벳으로 바꾸는 암호화 방식을 시저 암호라고 합니다. 예를 들어 "AB"는 1만큼 밀면 "BC"가 되고, 3만큼 밀면 "DE"가 됩니다. "z"는 1만큼 밀면 "a"가 됩니다. 문자열 s와 거리 n을 입력받아 s를 n만큼 민 암호문을 만드는 함수, solution을 완성해 보세요.

### 제한 조건

공백은 아무리 밀어도 공백입니다.
s는 알파벳 소문자, 대문자, 공백으로만 이루어져 있습니다.
s의 길이는 8000이하입니다.
n은 1 이상, 25이하인 자연수입니다.

### 입출력 예

|s|	n|	result|
|-|--|--------|
|"AB"|	1|	"BC"|
|"z"|	1|	"a"|
|"a B z"|	4|	"e F d"|

### 문제 출처

- [프로그래머스 시저 암호 문제](https://school.programmers.co.kr/learn/courses/30/lessons/12926)

### 문제 풀이 방식

우선 문자들에 더하기와 빼기가 가능한 이유로 아스키 코드라는 숫자로 변환하면 나오는 녀석을 이용하기 때문에 가능한 것인데, 이 아스키 코드에서 소문자 `z` 는 122 인데, 아스키 코드의 최댓값은 127로 `s[i] += n` 을 해버렸다가 만약 127 을 넘어가게 되면 다른 녀석이 되기에 계산할 때 한 번에 해주어야 해결을 볼 수 있다.
