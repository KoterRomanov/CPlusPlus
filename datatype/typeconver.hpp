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
}

class Button : public Widget
{
public:
	Button() {}
	~Button() {}
}


void function_type_convert()
{
	/* const_cast �����ָ�� & �����õ� const ���� */
	const unsigned char cpbuffer[] = {"hello"};
	unsigned char* pbuffer = const_cast<unsigned char*>(cpbuffer);

	/* static_cast ����ǿ������ת��*/
	int type = 100;
	unsigned char ch_type = static_cast<unsigned char>(type);

	/* static_cast ���ڴ��ڼ̳й�ϵ��������֮���ת�� */
	Widget* item = new Button();
	Button* item_button = static_cast<Button*>(item);
	Widget* item_widget = static_cast<Button*>(item_button);

	/* ����ת��������ȫ��û�ж�̬����ת���� */
	Widget d;
	Button* item_button_d = static_cast<Button*>(&d);

	/* ����ת������ȫ */
	Button b;
	Widget* item_widget_b = static_cast<Widget*>(&b);

	/* dynamic_cast */

	/* reinterpret_cast */
}