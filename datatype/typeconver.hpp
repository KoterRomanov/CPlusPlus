#pragma once
/**
 * @brief   对 C++ 数据类型转换的练习
 * @author  koterromanov
 * @date    2022-09-15
 */

class Widget
{
public:
	Widget() {}
	~Widget() {}

	/* 下行转换时，父类必须包含有虚函数（本质是虚函数表） */
	virtual void function() {}
};

class Button : public Widget
{
public:
	Button() {}
	~Button() {}
};


void function_type_convert()
{
	/* const_cast 解除常指针 & 常引用的 const 属性 */
	const unsigned char cpbuffer[] = {"hello"};
	unsigned char* pbuffer = const_cast<unsigned char*>(cpbuffer);

	/* static_cast 用于强制类型转换*/
	int type = 100;
	unsigned char ch_type = static_cast<unsigned char>(type);

	/* static_cast 用于存在继承关系的类类型之间的转换，非继承关系的类类型之间转换编译期会报错 */
	Widget* item = new Button();
	Button* item_button = static_cast<Button*>(item);
	Widget* item_widget = static_cast<Button*>(item_button);

	/* 下行转换，不安全（没有动态类型转换），转换失败时， item_button_d 不为空 */
	Widget d;
	Button* item_button_d = static_cast<Button*>(&d);

	/* 上行转换，安全 */
	Button b;
	Widget* item_widget_b = static_cast<Widget*>(&b);

	/* dynamic_cast 用于类类型转换，非继承关系的类型之间转换编译期不会报错， 转换会失败，转换结果会为空指针 */
	Button* item_button_d_dy = dynamic_cast<Button*>(&d); /* 下行转化，安全，转换失败item_button_d_dy 为空 */
	Widget* item_widget_b_dy = dynamic_cast<Widget*>(&b); /* 上行转换，安全，效果与 static_cast 一样 */

	/* reinterpret_cast */
	/* int (*)() 和 void (*)() 函数指针的转换必须使用 reinterpret_cast 才能成功 */
	Button* item_button_d_rp = reinterpret_cast<Button*>(&d); /* 不推荐使用， 保证转换合理情况下，其他转换都不能使用的情况下可以使用 */
}