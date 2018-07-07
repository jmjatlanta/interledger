#pragma once

#include <vector>

namespace interledger { namespace core {

class condition
{
public:
	condition(std::vector<unsigned char>& incoming);
	condition(std::vector<unsigned char>&& incoming);
	~condition();
private:
	condition();
	std::vector<unsigned char> bytes;
};

} } // namespace interledger::core
