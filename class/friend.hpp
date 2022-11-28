#pragma once
// ÓÑÔªº¯Êý

#include "define.h"

namespace Friend {
	class Student
	{
	public:
		Student() :m_age(0), m_score(0) {}
		~Student() {}

		friend int get_age(const Student& s);
		friend int get_score(const Student& s);

	private:

		int m_age;
		int m_score;
	};

	int get_age(const Student& s)
	{
		return s.m_age;
	}

	int get_score(const Student& s)
	{
		return s.m_score;
	}

}


void function_friend()
{
	Friend::Student t;
	std::cout << Friend::get_age(t) << std::endl;
	std::cout << Friend::get_score(t) << std::endl;
}
