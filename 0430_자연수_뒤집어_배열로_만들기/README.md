# 자연수 뒤집어 배열로 만들기

### 문제 설명

자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.

### 제한 조건

- n은 10,000,000,000이하인 자연수입니다.

### 입출력 예

|n|	return|
|---|---|
|12345|	[5,4,3,2,1]|

### 문제 출처

- [프로그래머스 자연수 뒤집어 배열로 만들기 문제](https://school.programmers.co.kr/learn/courses/30/lessons/12932)

### 문제 풀이 방식

몇 자리 숫자일지 알 수 없으니 for문 보다 while문으로 n 이 0이 될 때까지 실행하고, answer에 n의 10으로 나누었을때 나오는 나머지를 넣고, n을 10으로 나오는 몫을 다음 차례로 넘기는 식으로 하면 해답이 된다.
