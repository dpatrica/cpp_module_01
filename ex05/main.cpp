#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen obj;

	if (argc > 1)
		obj.complain(argv[1]);
	else
		std::cout << "Incorrect put\nPlease give function name!\n";
}