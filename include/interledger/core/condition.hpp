#pragma once

#include <vector>

namespace interledger { namespace core {

class condition
{
public:
	condition();
	~condition();
private:
	std::vector<unsigned char> bytes;
};

} } // namespace interledger::core
