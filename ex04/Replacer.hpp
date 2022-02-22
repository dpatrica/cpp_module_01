#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replacer
		{
		private:
			std::string		_fileName;
			std::string		_entry;
			std::string		_replaceEntry;
//			std::fstream	_fdIn;
			size_t			_replaceLine(std::string &allStr, size_t index = 0);

		public:
			Replacer(std::string fileName, std::string entry, std::string replaceEntry);
			~Replacer();

//			bool openFile(void);
			bool stringIsEmpty(void);
			bool openAndCreateReplaceFile(void);
		};

#endif
