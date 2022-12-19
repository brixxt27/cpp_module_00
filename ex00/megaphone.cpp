#include <iostream>

int	main(int argc, char *argv[])
{
	std::string	str;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_FAILURE);
	}
	for (int i = 1; i < argc; ++i) {
		str = argv[i];
		for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
			std::islower(*it) ? std::cout << (char)std::toupper(*it) : std::cout << *it;
		}
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
