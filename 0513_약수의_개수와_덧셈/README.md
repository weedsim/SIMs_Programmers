# 약수의 개수와 덧셈

### 문제 설명

두 정수 `left`와 `right`가 매개변수로 주어집니다. `left`부터 `right`까지의 모든 수들 중에서, 약수의 개수가 짝수인 수는 더하고, 약수의 개수가 홀수인 수는 뺀 수를 return 하도록 solution 함수를 완성해주세요.

### 제한사항

- 1 ≤ `left` ≤ `right` ≤ 1,000

### 입출력 예

|left|	right|	result|
|---|------|---------|
|13|	17|	43|
|24|	27|	52|

### 입출력 예 설명

#### 입출력 예 #1

- 다음 표는 13부터 17까지의 수들의 약수를 모두 나타낸 것입니다.

|수|	약수|	약수의 개수|
|---|------|--------------|
|13|	1, 13|	2|
|14|	1, 2, 7, 14|	4|
|15|	1, 3, 5, 15|	4|
|16|	1, 2, 4, 8, 16|	5|
|17|	1, 17|	2|

- 따라서, 13 + 14 + 15 - 16 + 17 = 43을 return 해야 합니다.

#### 입출력 예 #2

- 다음 표는 24부터 27까지의 수들의 약수를 모두 나타낸 것입니다.

|수|	약수|	약수의 개수|
|--|------|-------------|
|24|	1, 2, 3, 4, 6, 8, 12, 24|	8|
|25|	1, 5, 25|	3|
|26|	1, 2, 13, 26|	4|
|27|	1, 3, 9, 27|	4|

- 따라서, 24 - 25 + 26 + 27 = 52를 return 해야 합니다.

### 문제 출처

- [프로그래머스 약수의 개수와 덧셈 문제](https://school.programmers.co.kr/learn/courses/30/lessons/77884)

### 문제 풀이 방식

일단 약수의 개수가 거의 대부분은 짝수 개 이겠지만, 홀수 개로 되는 경우는 제곱수 인 경우로, 그 수가 제곱수 인지만 찾아주면 해결 되는 것으로 우선 그 수의 대략적인 제곱근을 정수 부분만 남기는 것으로 `static_cast<int>(sqrt(i))` 을 이용하여 int 로 최종 변환한 뒤, 그 수를 다시 제곱하였을 때 원래의 수와 같으면 제곱수, 다르면 제곱수가 아니게 된다는 것으로 진행하여 풀면 해결이다.
