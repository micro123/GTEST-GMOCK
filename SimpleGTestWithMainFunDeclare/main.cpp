#include <gtest/gtest.h>

int main(int argc, char* argv[])
{
	/*
	 * 初始化gtest,带参数的初始化函数可以使用命令行参数
	 */
	//testing::InitGoogleTest(&argc, argv);

	/*
	 * 此初始化方法不能使用命令行参数
	 */
	testing::InitGoogleTest();

	return RUN_ALL_TESTS();
}
