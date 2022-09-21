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

int main(int argc, char** argv)
{
	/* 练习结构体 */
	function_struct();

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