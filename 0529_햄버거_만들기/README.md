# 햄버거 만들기

### 문제 설명

햄버거 가게에서 일을 하는 상수는 햄버거를 포장하는 일을 합니다. 함께 일을 하는 다른 직원들이 햄버거에 들어갈 재료를 조리해 주면 조리된 순서대로 상수의 앞에 아래서부터 위로 쌓이게 되고, 상수는 순서에 맞게 쌓여서 완성된 햄버거를 따로 옮겨 포장을 하게 됩니다. 상수가 일하는 가게는 정해진 순서(아래서부터, 빵 – 야채 – 고기 - 빵)로 쌓인 햄버거만 포장을 합니다. 상수는 손이 굉장히 빠르기 때문에 상수가 포장하는 동안 속 재료가 추가적으로 들어오는 일은 없으며, 재료의 높이는 무시하여 재료가 높이 쌓여서 일이 힘들어지는 경우는 없습니다.

예를 들어, 상수의 앞에 쌓이는 재료의 순서가 [야채, 빵, 빵, 야채, 고기, 빵, 야채, 고기, 빵]일 때, 상수는 여섯 번째 재료가 쌓였을 때, 세 번째 재료부터 여섯 번째 재료를 이용하여 햄버거를 포장하고, 아홉 번째 재료가 쌓였을 때, 두 번째 재료와 일곱 번째 재료부터 아홉 번째 재료를 이용하여 햄버거를 포장합니다. 즉, 2개의 햄버거를 포장하게 됩니다.

상수에게 전해지는 재료의 정보를 나타내는 정수 배열 `ingredient`가 주어졌을 때, 상수가 포장하는 햄버거의 개수를 return 하도록 solution 함수를 완성하시오.

### 제한사항

- 1 ≤ `ingredient의` 길이 ≤ 1,000,000
- ingredient의 원소는 1, 2, 3 중 하나의 값이며, 순서대로 빵, 야채, 고기를 의미합니다.

### 입출력 예

|ingredient|	result|
|----------|----------|
|[2, 1, 1, 2, 3, 1, 2, 3, 1]|	2|
|[1, 3, 2, 1, 2, 1, 3, 1, 2]|	0|

### 입출력 예 설명

#### 입출력 예 #1

문제 예시와 같습니다.

#### 입출력 예 #2

상수가 포장할 수 있는 햄버거가 없습니다.

### 문제 출처

- [프로그래머스 햄버거 만들기 문제](https://school.programmers.co.kr/learn/courses/30/lessons/133502)

### 문제 풀이 방식

이번 문제의 경우 그냥 vector 상태로 풀이를 해보았지만 시간 초과를 해결하지 못하여 다른 방안으로 string 으로 변환 후 find 함수를 이용하는 방식을 채택하였다.
string 에 ingredient 의 앞부분부터 하나씩 추가를 해갈 때 4글자 이상 되어있을 때, 마지막 4글자가 1231 인지 확인하여 1231 이면 4글자를 자른 앞 부분으로 다시 넣어주고, answer에 +1 해주면 해결이다.
