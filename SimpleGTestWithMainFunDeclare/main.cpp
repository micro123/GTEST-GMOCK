#include <gtest/gtest.h>

int main(int argc, char* argv[])
{
	/*
	 * ��ʼ��gtest,�������ĳ�ʼ����������ʹ�������в���
	 */
	//testing::InitGoogleTest(&argc, argv);

	/*
	 * �˳�ʼ����������ʹ�������в���
	 */
	testing::InitGoogleTest();

	return RUN_ALL_TESTS();
}
