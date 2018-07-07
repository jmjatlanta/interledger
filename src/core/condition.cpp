
#include <interledger/core/condition.hpp>

namespace interledger { namespace core {

condition::condition(std::vector<unsigned char>& incoming)
{
	std::swap(incoming, bytes);
}

condition::condition(std::vector<unsigned char>&& incoming)
{
	bytes = incoming;
}

condition::~condition()
{

}

} } // end of namespace interledger::core
