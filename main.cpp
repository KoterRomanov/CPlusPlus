#include "logic.hpp"
#include "reference.hpp"
#include "const.hpp"
#include "constcast.hpp"
#include "mutable.hpp"
#include "sizeof.hpp"
#include "volatile.hpp"
#include "typedef.hpp"
#include "string.hpp"
#include "linkoperate.hpp"
#include "namespace.hpp"
#include "namespace_1.hpp"
#include "macro.hpp"
#include "explicit.hpp"
#include "datatype.hpp"
#include "enumtype.hpp"
#include "structtype.hpp"
#include "uniontype.hpp"
#include "typeconver.hpp"
#include "callmethod.hpp"
#include "defaultarguments.hpp"
#include "vafunction.hpp"
#include "function/functionpointer.hpp"
#include "link.hpp"
#include "class/class.hpp"
#include "class/friend.hpp"

int main(int argc, char** argv)
{
	/* 友元函数 */
	function_friend();

	/* C++ 成员列表初始化 */
	//function_class();

	/* 函数指针 */
	//function_pointer();

	/* 可变参数函数 */
	//function_va();

	/* 函数调用默认参数练习 */
	//function_default_arguments();

	/* c、c++ 调用约定练习 */
	//function_call();
	//int index = 0;
	//while (argv[index]) {

	//	printf("argv: %s\n", argv[index++]);
	//}
	///* 练习数据类型转换 */
	//function_type_convert();

	/* 练习联合体 */
	//function_union();

	/* 练习结构体 */
	//function_struct();

	//function_enum();

	//Laboratory_pack();

	//local_and_remote();

	//func_reference();

	//func_const();

	//func_const_cast();

	//func_mutable();

	//SIZEOF_NAMESPACE::func_sizeof();

	//func_volatile();

	//func_typedef();

	//func_string();

	//func_link_operate();

	//_TEST::g_local = 100;
	//_TEST::g_remote = 200.00;
	//_TEST::function_namespacec();
	//_TEST::function_namespace_1();

	// 调用名字空间的子空间的函数
	//_TEST::_SUB_TEST::function_sub_namespace();

	// 给名字空间起别名
	//namespace STEST = _TEST::_SUB_TEST;
	//STEST::function_sub_namespace();

	//function_macro();

	//_EXPLICIT::function_explicit();

	//function_datatype();

	system("pause");
	return 0;
}