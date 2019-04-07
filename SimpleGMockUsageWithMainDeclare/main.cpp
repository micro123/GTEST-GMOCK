#include "someinterface.h"

#include <gmock/gmock.h>

class MockResource: public IResource
{
public:
	MOCK_CONST_METHOD0(GetInteger, int());
	MOCK_METHOD1(TestResource, bool(int));
};

bool SomeMockBehavior(int x)
{
	return x % 2 == 0;
}


int main(int argc, char* argv[])
{
	testing::InitGoogleMock(&argc, argv);

	testing::NiceMock<MockResource> res;



	ON_CALL(res, GetInteger()).WillByDefault(testing::Return(100));
	EXPECT_CALL(res, TestResource(testing::_)).Times(2).WillRepeatedly(testing::Invoke<bool(int)>(SomeMockBehavior));


	std::cout << res.TestResource(100) << std::endl;
	std::cout << res.TestResource(111) << std::endl;
}



