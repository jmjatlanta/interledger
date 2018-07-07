#include <interledger/core/condition.hpp>

#define BOOST_TEST_MODULE interledger tests
#include <boost/test/included/unit_test.hpp>

std::vector<unsigned char> generate_hash()
{
	std::vector<unsigned char> ret_val;
	for(unsigned int i = 0; i < 32; ++i)
		ret_val[i] = i % 255;
}

BOOST_AUTO_TEST_SUITE(condition_tests)

BOOST_AUTO_TEST_CASE(condition_constructor)
{
	std::vector<unsigned char> hash = generate_hash();
	interledger::core::condition condition(hash);
	BOOST_CHECK(true);
}

BOOST_AUTO_TEST_CASE(condition_constructor2)
{
	interledger::core::condition condition(generate_hash());
	BOOST_CHECK(true);
}

BOOST_AUTO_TEST_SUITE_END()

