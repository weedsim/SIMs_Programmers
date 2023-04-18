# 음양 더하기

### 문제 설명

어떤 정수들이 있습니다. 이 정수들의 절댓값을 차례대로 담은 정수 배열 absolutes와 이 정수들의 부호를 차례대로 담은 불리언 배열 signs가 매개변수로 주어집니다. 실제 정수들의 합을 구하여 return 하도록 solution 함수를 완성해주세요.

### 제한사항

- absolutes의 길이는 1 이상 1,000 이하입니다.
    - absolutes의 모든 수는 각각 1 이상 1,000 이하입니다.
- signs의 길이는 absolutes의 길이와 같습니다.
    - signs[i] 가 참이면 absolutes[i] 의 실제 정수가 양수임을, 그렇지 않으면 음수임을 의미합니다.

### 입출력 예

|absolutes|	signs|	result|
|---|---|
|[4,7,12]|	[true,false,true]|	9|
|[1,2,3]|	[false,false,true]|	0|

### 입출력 예 설명

#### 입출력 예 #1

- signs가 [true,false,true] 이므로, 실제 수들의 값은 각각 4, -7, 12입니다.
- 따라서 세 수의 합인 9를 return 해야 합니다.

#### 입출력 예 #2

- signs가 [false,false,true] 이므로, 실제 수들의 값은 각각 -1, -2, 3입니다.
- 따라서 세 수의 합인 0을 return 해야 합니다.

- [프로그래머스 음양 더하기](https://school.programmers.co.kr/learn/courses/30/lessons/76501)

### 문제 풀이 방식

vector의 사이즈는 확정이 나 있는 것이 아니기에 우선적으로 입력되는 absolutes의 길이를 파악하고 for문을 이용하여 signs가 true이면 답에 absolutes만큼 더하고 false이면 답에서 absolutes만큼 빼는 방식을 이용하였다.
for문에 i를 이용한 것은 사실 vector의 front, pop을 이용하여도 되지만 편의상 index 느낌으로 사용하였다.