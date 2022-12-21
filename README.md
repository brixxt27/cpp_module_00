# Home
https://github.com/brixxt27/cpp_module
# ex00: Megaphone
## Summary
- Turn-in directory : ex00/
- Files to turn in : Makefile, megaphone.cpp
- Forbidden functions : None
## Detail
```
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```
1. argc 가 1일 때 "* LOUD AND UNBEARABLE FEEDBACK NOISE *" 출력
2. 명령행 인자로 몇 개가 들어오든지 이를 한 줄로 출력하는데, 소문자를 대문자로 변경한다.

# ex01: My Awesome PhoneBook
## Summary
- Turn-in directory : ex01/
- Files to turn in : Makefile, *.cpp, *.{h, hpp}
- Forbidden functions : None
## Detail
<img width="1054" alt="image" src="https://user-images.githubusercontent.com/83959536/208841753-949c818e-02ed-4bae-b955-9ea7557abe03.png">


1. 두 개의 class를 구현하라.
- PhoneBook
	- 연락처의 배열을 하나 가지고 있다.
	- 최대 8개의 연락처를 가질 수 있다. 만약 유저가 9번째의 연락처를 추가하려 한다면, 가장 오래된 것이 이것으로 교체된다. 즉, 8개를 유지한다.
	- 동적 배열 사용은 금지 되어 있다.
- Contact
	- PhoneBook 연락처를 나타낸다.
2. class 내에서 사용되는 것은 private로 class 바깥에서 사용되는 것은 public으로 해야 한다.
3. 처음 phonebook은 비어있으며 유저는 세 개의 명령어(ADD, SEARCH, EXIT)를 입력할 수 있다.

-  ADD: 새로운 연락처 추가
	- 만약 이 명령을 유저가 입력한다면, 그들은 한 번당 하나씩 새로운 연락처의 정보를 입력한다.
	모든 정보 입력이 완료 되었을 때, 폰북의 연락처에 저장된다.
	- The contact fields are: 
		- first name
		- last name
		- nickname
		- phone number
		- darkest secret
	- 연락처는 비어 있는 정보를 받을 수 없다.
-  SEARCH: 특정 연락처를 보여준다.
	-  저장된 연락처를 4개의 열로 보여준다: index, first name, last name and nickname.
	-  각 열은 너비 10개의 문자를 가져야 한다. 이들은 파이프 '|' 문자로 구분되어야 한다. 텍스트들은 오른쪽 정렬이어야 한다.
	만약 텍스트가 문자 10개보다 많다면, 그것들은 버리고, 보일 수 있는 마지막 문자를 '.'으로 변경해야 한다.
	-  Then, prompt the user again for the index of the entry to display. If the index
	is out of range or wrong, define a relevant behavior. Otherwise, display the
	contact information, one field per line.
	- 그러면, 유저에게 볼 인덱스를 다시 보여줘라. 만약 인덱스가 범위를 넘거나 잘못되었다면, 그에 따라 정의된 예외처리를 보여줘라.
	올바른 조건이라면, 한 줄 당 하나의 정보를 보여줘라.
- EXIT
	-  프로그램을 종료시키고, 저장된 정보는 영원히 손실된다.
- 다른 입력은 버려진다.
- 하나의 명령어가 올바르게 실행된다면, 그 프로그램은 이 명령어가 끝날 때까지 다른 명령어를 기다려야 한다.
프로그램은 유저가 EXIT을 입력할 때 멈춘다.
