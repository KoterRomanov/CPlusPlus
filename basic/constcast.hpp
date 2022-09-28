#pragma once
/**
 * @brief   �� C++ const_cast �ؼ��ֵ���ϰ
 * @author  koterromanov
 * @date    2022-09-04
 */

#pragma warning(disable : 4819 4477 4313)

void func_const_cast()
{
	const int Local = 100;
	const int& rfLocal = Local;
	const int* pLocal = &Local;

	//*cLocal = 300; // ����������ͨ����ָ���޸ı�����ֵ

	// �Ƴ���ָ��� const ���ԣ�ʹ����ͨ��ָ���޸ı���ֵ
	int* npLocal = const_cast<int*>(&Local);
	*npLocal = 200;
	//pri
	// ntf("cLocal = %d\n", npLocal);
	//printf("cLocal = %d\n", pLocal);
	printf("cLocal = %d\n", *npLocal);

	int& nrLocal = const_cast<int&>(Local);
	nrLocal = 300;
	printf("nrLocal = %d\n", nrLocal);
	printf("Local = %d\n", Local);	// Local ʼ����� 100, �������Ż���ԭ�� Local �滻�������ֳ���100,���� printf ������� 100,ʵ�� Local������ֵ�Ѿ��޸ĳ�300��


	printf("nrLocal = 0x%x\n", &nrLocal);
	printf("npLocal = 0x%x\n", npLocal);
	printf("Local = 0x%x\n", &Local);
}