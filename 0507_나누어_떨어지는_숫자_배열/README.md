# 나누어 떨어지는 숫자 배열

### 문제 설명

array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을 반환하는 함수, solution을 작성해주세요.
divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하세요.

### 제한사항

- arr은 자연수를 담은 배열입니다.
- 정수 i, j에 대해 i ≠ j 이면 arr[i] ≠ arr[j] 입니다.
- divisor는 자연수입니다.
- array는 길이 1 이상인 배열입니다.

### 입출력 예

|arr|	divisor|	return|
|----|---------|-----------|
|[5, 9, 7, 10]|	5|	[5, 10]|
|[2, 36, 1, 3]|	1|	[1, 2, 3, 36]|
|[3,2,6]|	10|	[-1]|

### 입출력 예 설명

#### 입출력 예#1

arr의 원소 중 5로 나누어 떨어지는 원소는 5와 10입니다. 따라서 [5, 10]을 리턴합니다.

#### 입출력 예#2

arr의 모든 원소는 1으로 나누어 떨어집니다. 원소를 오름차순으로 정렬해 [1, 2, 3, 36]을 리턴합니다.

#### 입출력 예#3

3, 2, 6은 10으로 나누어 떨어지지 않습니다. 나누어 떨어지는 원소가 없으므로 [-1]을 리턴합니다.

### 문제 출처

- [프로그래머스 나누어 떨어지는 숫자 배열 문제](https://school.programmers.co.kr/learn/courses/30/lessons/12910)

### 문제 풀이 방식

먼저 arr 에 들어있는 요소는 오름차순이나 내림차순으로 정렬이 되있는 것이 아니기에 정렬은 마지막에 시행하는 것으로 하고 우선 원소가 divisor로 나누었을 때 나머지가 0이 되는, 즉 나누어떨어지는 값인지 확인한 뒤, 나누어 떨어지면 answer에 집어 넣은 뒤에 오름차순으로 정렬을 시행해준다.
참고로 sort 함수는 `#include <algorithm>` 에 들어 있는 것이고, vector는 오름차순으로 정렬을, 배열은 내림차순으로 정렬이 이루어진다.
마지막에 나누어 떨어지는 수가 없으면 answer에는 들어있는 것이 없으니 size 가 0일 경우 answer에 -1을 넣어주면 된다.
