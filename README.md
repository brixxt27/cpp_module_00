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
1. 두 개의 class를 구현하라.
- PhoneBook
	- 연락처의 배열을 하나 가지고 있다.
	- 최대 8개의 연락처를 가질 수 있다. 만약 유저가 9번째의 연락처를 추가하려 한다면, 가장 오래된 것이 이것으로 교체된다. 즉, 8개를 유지한다.
	- 동적 배열 사용은 금지 되어 있다.
- Contact
	- PhoneBook 연락처를 나타낸다.
2. class 내에서 사용되는 것은 private로 class 바깥에서 사용되는 것은 public으로 해야 한다.
3. 처음 phonebook은 비어있으며 유저는 세 개의 명령어(ADD, SEARCH, EXIT)를 입력할 수 있다.

-  ADD: save a new contact
	- If the user enters this command, they are prompted to input the information
	of the new contact one field at a time. Once all the fields have been completed,
	add the contact to the phonebook.
	- The contact fields are: first name, last name, nickname, phone number, and
	darkest secret. A saved contact can’t have empty fields.
-  SEARCH: display a specific contact
	-  Display the saved contacts as a list of 4 columns: index, first name, last
	name and nickname.
	-  Each column must be 10 characters wide. A pipe character (’|’) separates
	them. The text must be right-aligned. If the text is longer than the column,
	it must be truncated and the last displayable character must be replaced by a
	dot (’.’).
	-  Then, prompt the user again for the index of the entry to display. If the index
	is out of range or wrong, define a relevant behavior. Otherwise, display the
	contact information, one field per line.
- EXIT
	-  The program quits and the contacts are lost forever!
- Any other input is discarded.
- Once a command has been correctly executed, the program waits for another one. It
stops when the user inputs EXIT.
