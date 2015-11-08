#ifndef TO_STRING_HPP
#define TO_STRING_HPP 

#include <sstream>
#include <string>

namespace std {
	template <typename T>
	std::string to_string(T value)
	{
		std::ostringstream os;
		os << value;

		return os.str();
	}
}

#endif /* TO_STRING_HPP */
