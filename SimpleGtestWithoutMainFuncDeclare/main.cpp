/*
 * �˹�����������gtest_main.lib,���Կ��Բ�дmain����
 */

/*
 * ��дһ���򵥵Ĳ���
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

