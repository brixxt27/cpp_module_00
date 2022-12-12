#include <iostream>

int	main(int argc, char *argv[])
{
	std::string	arr;
	size_t			len;
	size_t			i = 1;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (EXIT_FAILURE);
	}
	while (argv[i]) {
		arr = argv[i];
		len = arr.length();
		for (size_t j = 0; len > j; ++j) {
			if (std::islower(arr[j]))
				arr[j] = std::toupper(arr[j]);
			std::cout << arr[j];
		}
		++i;
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
