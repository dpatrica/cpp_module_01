#include "Replacer.hpp"

Replacer::Replacer(std::string fileName, std::string entry, std::string replaceEntry):
_fileName(fileName), _entry(entry), _replaceEntry(replaceEntry)
{
	std::cout << "Replacer Constructed" << std::endl;
}

Replacer::~Replacer() {std::cout << "Replacer Destructed" << std::endl;}

size_t Replacer::_replaceLine(std::string &allStr, size_t index)
{
	int start = allStr.find(this->_entry, index);

	if (start >= 0)
	{
		allStr.erase(start, this->_entry.length());
		allStr.insert(start, this->_replaceEntry);
		return start + this->_replaceEntry.length();
	}

	return 0;
}
/*
bool Replacer::openFile(void)
{
	std::fstream kek(this->_fileName, std::fstream::in);
	this->_fdIn = kek;//std::fstream(this->_fileName, std::fstream::in);
	return this->_fdIn.is_open();
}*/

bool Replacer::stringIsEmpty(void)
{
	if (this->_entry.empty() || this->_replaceEntry.empty())
		return true;
	return false;
}

bool Replacer::openAndCreateReplaceFile(void)
{
	std::fstream fdIn(this->_fileName, std::fstream::in);
	if (!fdIn.is_open())
		return false;

	std::string line;
	std::string allStr;
	std::fstream fdOut(this->_fileName + ".replace", std::fstream::out);

	while (getline(fdIn, line))
		allStr += line + "\n";

	for (size_t i = this->_replaceLine(allStr); i > 0; i = this->_replaceLine(allStr, i));

	fdOut << allStr;
	return true;
}
