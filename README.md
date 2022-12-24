# Home
### 이슈 관리: [전체 이슈 list](https://github.com/brixxt27/cpp_module_00/issues/7)

# ex00: Megaphone
## Usage
```
git clone https://github.com/brixxt27/cpp_module_00.git
cd cpp_module_00/ex00/
make
./megaphone "shhhhh... I think the students are asleep..." 
```
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
## Usage
```
git clone https://github.com/brixxt27/cpp_module_00.git
cd cpp_module_00/ex01/
make
./my_awesome_phone_book
```
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
# ex02: The job of your dreams
## Usage
```
git clone https://github.com/brixxt27/cpp_module_00.git
cd cpp_module_00/ex02/
make
./the_job_of_your_dreams
```
## Summary
- Turn-in directory : ex02/
- Files to turn in : Makefile, Account.cpp, Account.hpp, tests.cpp
- Forbidden functions : None
## Detail
오늘은 GlobalBanksters United에서 당신의 첫 근무일입니다. 성공적인 채용 시험을 통과하고, dev 팀에 소속 되었습니다. 어쨌든 당신의 매니저는 단지 해야할 일 몇 가지를 줬습니다. 첫 일은 손실된 파일을 복구하는 것입니다. 이 팀은 Git 을 이용할지 모르고 오직 USB로 소스를 관리하는 팀이었습니다. 원래라면 당장 이 팀을 나가는 것이 합당하겠지만 이곳을 변화시키기로 마음 먹었습니다. 목표는 Accout.cpp 를 복구하는 것이며, 현재 남은 것은 Accout.hpp 와 이를 실행한 log 파일 뿐입니다. c++ 매너로 가득 채워 Accout.cpp 를 구현해야하고, 타임 스탬프를 제외하고 log와 동일하게 출력 되도록 해야 합니다.
### 출력 결과에 따른 메소드 설계(메소드는 출력 결과를 보고 유추하여 구현해야 함)
Account() 생성자
```
[19920104_091532] index:0;amount:42;created
[19920104_091532] index:1;amount:54;created
[19920104_091532] index:2;amount:957;created
[19920104_091532] index:3;amount:432;created
[19920104_091532] index:4;amount:1234;created
[19920104_091532] index:5;amount:0;created
[19920104_091532] index:6;amount:754;created
[19920104_091532] index:7;amount:16576;created
```
Account::displayAccountsInfos();
```
[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
```
std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
```
[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
[19920104_091532] index:1;amount:54;deposits:0;withdrawals:0
[19920104_091532] index:2;amount:957;deposits:0;withdrawals:0
[19920104_091532] index:3;amount:432;deposits:0;withdrawals:0
[19920104_091532] index:4;amount:1234;deposits:0;withdrawals:0
[19920104_091532] index:5;amount:0;deposits:0;withdrawals:0
[19920104_091532] index:6;amount:754;deposits:0;withdrawals:0
[19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0
```
for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {
	(*(it.first)).makeDeposit( *(it.second) );
	}
```
[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
[19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
[19920104_091532] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
[19920104_091532] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
[19920104_091532] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
[19920104_091532] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
[19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
[19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
```
Account::displayAccountsInfos();
```
[19920104_091532] accounts:8;total:21524;deposits:8;withdrawals:0
```
std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
```
[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
[19920104_091532] index:1;amount:819;deposits:1;withdrawals:0
[19920104_091532] index:2;amount:1521;deposits:1;withdrawals:0
[19920104_091532] index:3;amount:434;deposits:1;withdrawals:0
[19920104_091532] index:4;amount:1321;deposits:1;withdrawals:0
[19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
[19920104_091532] index:6;amount:763;deposits:1;withdrawals:0
[19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0
```
for ( acc_int_t it( acc_begin, wit_begin );
		it.first != acc_end && it.second != wit_end;
		++(it.first), ++(it.second) ) {
	(*(it.first)).makeWithdrawal( *(it.second) );
}
```
[19920104_091532] index:0;p_amount:47;withdrawal:refused
[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
[19920104_091532] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
[19920104_091532] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
[19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
[19920104_091532] index:5;p_amount:23;withdrawal:refused
[19920104_091532] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
[19920104_091532] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1
```
Account::displayAccountsInfos();
```
[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
```
std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
```
[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
[19920104_091532] index:1;amount:785;deposits:1;withdrawals:1
[19920104_091532] index:2;amount:864;deposits:1;withdrawals:1
[19920104_091532] index:3;amount:430;deposits:1;withdrawals:1
[19920104_091532] index:4;amount:1245;deposits:1;withdrawals:1
[19920104_091532] index:5;amount:23;deposits:1;withdrawals:0
[19920104_091532] index:6;amount:106;deposits:1;withdrawals:1
[19920104_091532] index:7;amount:8942;deposits:1;withdrawals:1
```
~Account()
```
[19920104_091532] index:0;amount:47;closed
[19920104_091532] index:1;amount:785;closed
[19920104_091532] index:2;amount:864;closed
[19920104_091532] index:3;amount:430;closed
[19920104_091532] index:4;amount:1245;closed
[19920104_091532] index:5;amount:23;closed
[19920104_091532] index:6;amount:106;closed
[19920104_091532] index:7;amount:8942;closed
