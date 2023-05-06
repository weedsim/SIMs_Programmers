# 서울에서 김서방 찾기

### 문제 설명

String형 배열 seoul의 element중 "Kim"의 위치 x를 찾아, "김서방은 x에 있다"는 String을 반환하는 함수, solution을 완성하세요. seoul에 "Kim"은 오직 한 번만 나타나며 잘못된 값이 입력되는 경우는 없습니다.

### 제한 사항

- seoul은 길이 1 이상, 1000 이하인 배열입니다.
- seoul의 원소는 길이 1 이상, 20 이하인 문자열입니다.
- "Kim"은 반드시 seoul 안에 포함되어 있습니다.

### 입출력 예

|seoul|	return|
|-----|-------|
|["Jane", "Kim"]|	"김서방은 1에 있다"|

### 문제 출처

- [프로그래머스 서울에서 김서방 찾기 문제](https://school.programmers.co.kr/learn/courses/30/lessons/12919)

### 문제 풀이 방식

string 찾기 위해 algorithm에 있는 find 함수를 이용하여 어디에 있는지를 찾고 answer에 넣어 주면 되는데, 만약 n 을 answer에 그대로 넣게 되면 n 은 int 인데 반해 answer은 string이여서 int 상태로 넣게 되면 아스키 코드 값으로 들어가게 되기에 반드시 string으로 변환 시켜 주는 to_string으로 변환하여 추가해줘야한다.
