#include <iostream>
#include "PhoneBook.hpp"

namespace Message {
	static void	NiceToMeetYou() {
		std::cout << "___  ___          ___                                                ______  _                         ______                _    " << " .  l''!,彡⌒ ミ" << std::endl;
		std::cout << "|  \\/  |         / _ \\                                               | ___ \\| |                        | ___ \\              | |   " << " .  | |(´･ω･｀) 5252-" << std::endl;
		std::cout << "| .  . | _   _  / /_\\ \\__      __  ___  ___   ___   _ __ ___    ___  | |_/ /| |__    ___   _ __    ___ | |_/ /  ___    ___  | | __" << " .  ＼　　　　ヽ  Nice to meet you~" << std::endl;
		std::cout << "| |\\/| || | | | |  _  |\\ \\ /\\ / / / _ \\/ __| / _ \\ | '_ ` _ \\  / _ \\ |  __/ | '_ \\  / _ \\ | '_ \\  / _ \\| ___ \\ / _ \\  / _ \\ | |/ /"  << " .  　 | ･　 ･.| |" << std::endl;
		std::cout << "| |  | || |_| | | | | | \\ V  V / |  __/\\__ \\| (_) || | | | | ||  __/ | |    | | | || (_) || | | ||  __/| |_/ /| (_) || (_) ||   < "  <<  " .  　|　.,,;,.　| |" << std::endl;
		std::cout << "\\_|  |_/ \\__, | \\_| |_/  \\_/\\_/   \\___||___/ \\___/ |_| |_| |_| \\___| \\_|    |_| |_| \\___/ |_| |_| \\___|\\____/  \\___/  \\___/ |_|\\_\\" <<  " .  　|　i.uj　|ﾘ" << std::endl;
		std::cout << "          __/ |                                                                                                                   " << std::endl;
		std::cout << "         |___/                                                                                                                    " << std::endl;
	}

	static void	ByeMyFriend() {
		std::cout << "PhoneBook: Phone book is over!" << std::endl;
		std::cout << "___  ___          ___                                                ______  _                         ______                _    " << " .  l''!,彡⌒ ミ" << std::endl;
		std::cout << "|  \\/  |         / _ \\                                               | ___ \\| |                        | ___ \\              | |   " << " .  | |(´･ω･｀) 5252-" << std::endl;
		std::cout << "| .  . | _   _  / /_\\ \\__      __  ___  ___   ___   _ __ ___    ___  | |_/ /| |__    ___   _ __    ___ | |_/ /  ___    ___  | | __" << " .  ＼　　　　ヽ  Bye my friend~" << std::endl;
		std::cout << "| |\\/| || | | | |  _  |\\ \\ /\\ / / / _ \\/ __| / _ \\ | '_ ` _ \\  / _ \\ |  __/ | '_ \\  / _ \\ | '_ \\  / _ \\| ___ \\ / _ \\  / _ \\ | |/ /"  << " .  　 | ･　 ･.| |" << std::endl;
		std::cout << "| |  | || |_| | | | | | \\ V  V / |  __/\\__ \\| (_) || | | | | ||  __/ | |    | | | || (_) || | | ||  __/| |_/ /| (_) || (_) ||   < "  <<  " .  　|　.,,;,.　| |" << std::endl;
		std::cout << "\\_|  |_/ \\__, | \\_| |_/  \\_/\\_/   \\___||___/ \\___/ |_| |_| |_| \\___| \\_|    |_| |_| \\___/ |_| |_| \\___|\\____/  \\___/  \\___/ |_|\\_\\" <<  " .  　|　i.uj　|ﾘ" << std::endl;
		std::cout << "          __/ |                                                                                                                   " << std::endl;
		std::cout << "         |___/                                                                                                                    " << std::endl;
	}
}

int	main() {
	std::string	str = "";
	PhoneBook	phone_book;

	Message::NiceToMeetYou();

	while (str != "EXIT") {
		std::cout << "PhoneBook: Input COMMAND(ADD or SEARCH or EXIT)" << std::endl;
		std::cout << "==> " << std::endl;
		std::cin >> str;
		std::cout << std::endl;
		std::cin.ignore(LLONG_MAX, '\n');

		if (str == "ADD") {
			phone_book.Add();
		}
		if (str == "SEARCH") {
			phone_book.Search();
		}
		if (std::cin.eof() == true) {
			std::cout << "PhoneBook: EOF come in the console" << std::endl;
			break ;
		}
	}

	Message::ByeMyFriend();
	return 0;
}
