/*
 * 此工程中链接了gtest_main.lib,所以可以不写main函数
 */

/*
 * 编写一个简单的测试
 */
#include <gtest/gtest.h>
TEST(SimpleTest, Pass)
{
	EXPECT_EQ(10, 5 + 5);
}

TEST(SimpleTest, Failure)
{
	EXPECT_GT(5, 5);
}

