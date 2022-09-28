#pragma once
/**
 * @brief   �� C++ mutable �ؼ��ֵ���ϰ
 * @author  koterromanov
 * @date    2022-09-04
 */

class Remote
{
public:
	Remote():m_counter(0) {}
	~Remote() {}

public:

	// �������޸ķǳ�����
	void counter() const {

		m_counter++;
		printf("count %d\n", m_counter);
	}

private:

	mutable int m_counter;
};

void func_mutable()
{
	// PS: ͨ����������ó��������������޸� mutable ���ε���ͨ��Ա����
	// mutable ֻ�����ڷǾ�̬���ǳ��������ݳ�Ա
	const Remote obj;
	obj.counter();
}
