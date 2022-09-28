#pragma once

#include "define.h"

bool g_isLocal = true;
bool g_isRemote = false;

/**
 * && �߼����������ϰ
 */
bool local_and_remote()
{
	if (g_isLocal and g_isRemote) {

		printf("Local and Remote\n");
		return true;
	}

	printf("Local and Remote is false\n");
	return false;
}

/**
 * || �߼����������ϰ
 */
bool local_or_remote()
{
	if (g_isLocal or g_isRemote) {
		printf("Local or Remote\n");
		return true;
	}

	printf("Local or Remote is false\n");
	return false;
}

/**
 * ! �߼����������ϰ
 */
bool local_not()
{
	if (not g_isLocal) {

		printf("Not Local\n");
		return true;
	}

	printf("Not local is false\n");
	return false;
}

/**
 * !=  �������������ϰ
 */
bool local_not_equal_remote()
{
	if (g_isLocal not_eq g_isRemote) {

		printf("local not equal remote");
		return true;
	}

	printf("local not equal remote is false\n");
	return false;
}

/**
 * &  ��λ���������ϰ
 */
int data_bit_and(int &first, int &second)
{
	printf("data bit and\n");
	return (first bitand second);
}

/**
 * |  ��λ���������ϰ
 */
int data_bit_or(int& first, int& second)
{
	printf("data bit or\n");
	return (first bitor second);
}

/**
 * ~  ȡ���������ϰ
 */
int data_compl(int& data)
{
	printf("data compl\n");
	return (compl data);
}
