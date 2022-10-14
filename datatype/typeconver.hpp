#pragma once
/**
 * @brief   �� C++ ��������ת������ϰ
 * @author  koterromanov
 * @date    2022-09-15
 */

class Widget
{
public:
	Widget() {}
	~Widget() {}

	/* ����ת��ʱ���������������麯�����������麯���� */
	virtual void function() {}
};

class Button : public Widget
{
public:
	Button() {}
	~Button() {}
};


class DataBox
{
public:
	DataBox(int i):m_i(i), m_f(i), m_d(i) {}
	DataBox(float f) :m_i(f), m_f(f), m_d(f) {}
	DataBox(double d) :m_i(d), m_f(d), m_d(d) {}

	operator int() { 
		
		printf("DataBox convert to int\n");
		return m_i;
	}

	operator float() { 
		
		printf("DataBox convert to float\n");
		return m_f;
	}

	operator double() { 
		
		printf("DataBox convert to double\n");
		return m_d;
	}

private:

	int m_i;

	float m_f;

	double m_d;
};


void function_type_convert()
{
	/* const_cast �����ָ�� & �����õ� const ���� */
	const unsigned char cpbuffer[] = {"hello"};
	unsigned char* pbuffer = const_cast<unsigned char*>(cpbuffer);

	/* static_cast ����ǿ������ת��*/
	int type = 100;
	unsigned char ch_type = static_cast<unsigned char>(type);

	/* static_cast ���ڴ��ڼ̳й�ϵ��������֮���ת�����Ǽ̳й�ϵ��������֮��ת�������ڻᱨ�� */
	Widget* item = new Button();
	Button* item_button = static_cast<Button*>(item);
	Widget* item_widget = static_cast<Button*>(item_button);

	/* ����ת��������ȫ��û�ж�̬����ת������ת��ʧ��ʱ�� item_button_d ��Ϊ�� */
	Widget d;
	Button* item_button_d = static_cast<Button*>(&d);

	/* ����ת������ȫ */
	Button b;
	Widget* item_widget_b = static_cast<Widget*>(&b);

	/* dynamic_cast ����������ת�����Ǽ̳й�ϵ������֮��ת�������ڲ��ᱨ�� ת����ʧ�ܣ�ת�������Ϊ��ָ�� */
	Button* item_button_d_dy = dynamic_cast<Button*>(&d); /* ����ת������ȫ��ת��ʧ��item_button_d_dy Ϊ�� */
	Widget* item_widget_b_dy = dynamic_cast<Widget*>(&b); /* ����ת������ȫ��Ч���� static_cast һ�� */

	/* reinterpret_cast */
	/* int (*)() �� void (*)() ����ָ���ת������ʹ�� reinterpret_cast ���ܳɹ� */
	Button* item_button_d_rp = reinterpret_cast<Button*>(&d); /* ���Ƽ�ʹ�ã� ��֤ת����������£�����ת��������ʹ�õ�����¿���ʹ�� */


	/* ������������ - ������֮���ת�� */
	DataBox db = 100;
	int db_data = db; /* ��ʽת�� */
	/* int db_data = (int)db ��ʾת�� */
}