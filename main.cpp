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
	/* ��Ԫ���� */
	function_friend();

	/* C++ ��Ա�б��ʼ�� */
	//function_class();

	/* ����ָ�� */
	//function_pointer();

	/* �ɱ�������� */
	//function_va();

	/* ��������Ĭ�ϲ�����ϰ */
	//function_default_arguments();

	/* c��c++ ����Լ����ϰ */
	//function_call();
	//int index = 0;
	//while (argv[index]) {

	//	printf("argv: %s\n", argv[index++]);
	//}
	///* ��ϰ��������ת�� */
	//function_type_convert();

	/* ��ϰ������ */
	//function_union();

	/* ��ϰ�ṹ�� */
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

	// �������ֿռ���ӿռ�ĺ���
	//_TEST::_SUB_TEST::function_sub_namespace();

	// �����ֿռ������
	//namespace STEST = _TEST::_SUB_TEST;
	//STEST::function_sub_namespace();

	//function_macro();

	//_EXPLICIT::function_explicit();

	//function_datatype();

	system("pause");
	return 0;
}