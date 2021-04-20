#include "boost/ut.hpp"

using namespace boost::ut;
using namespace boost::ut::literals;

int main()
{
	"trivial"_test = [] {
		expect(that % true == false);
	};
}
