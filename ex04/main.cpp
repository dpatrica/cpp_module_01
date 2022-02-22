#include "Replacer.hpp"

#define FILENAME 1
#define ENTRY 2
#define REPLACE_ENTRY 3

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "ERROR! Should be 3 arguments" << std::endl;
		return 1;
	}

	Replacer obj(argv[FILENAME], argv[ENTRY], argv[REPLACE_ENTRY]);

	if (obj.stringIsEmpty())
	{
		std::cout << "ERROR: string can not be empty!" << std::endl;
		return 1;
	}

	if (!obj.openAndCreateReplaceFile())
	{
		std::cout << "ERROR: Opening file!" << std::endl;
		return 1;
	}

	return 0;
}
