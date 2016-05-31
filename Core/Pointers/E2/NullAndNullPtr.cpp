#include "Headers.h"

void NullAndNullPtr::testNullAndNullPtr() {
#pragma region notes
	/********************************************************************************************************************************
	* NULL:
	*      usually defined as ((void *)0) or just 0
	*      code definition in stddef.h, e.g., http://clang.llvm.org/doxygen/stddef_8h_source.html
	*      http://www.cplusplus.com/reference/clibrary/cstring/NULL/
	* MSDN NULL:
	*      http://msdn.microsoft.com/en-us/library/43t8xk57.aspx
	*      http://msdn.microsoft.com/en-us/library/5wz839w2.aspx
	* nullptr: http://www.stroustrup.com/C++11FAQ.html#nullptr
	*          why? from http://www.cprogramming.com/c++11/c++11-nullptr-strongly-typed-enum-class.html:
	*          if you have
	*               void func(int n);
	*               void func(char *s);
	*               func( NULL );
	*         which function gets called? C++11 seeks to resolve the confusion with nullptr
	* MSDN nullptr: http://msdn.microsoft.com/en-us/library/4ex65770.aspx
	*               http://stackoverflow.com/questions/7978006/nullptr-vs-nullptr (how to choose between __nullptr and nullptr)
	* C's "null pointer": http://c-faq.com/null/
	********************************************************************************************************************************/
#pragma endregion
	cout << "3. Testing NULL and nullptr: " << endl; // below, what does each line do and/or output?
	int* p;                         //
	int i = 10;                     //
	p = &i;                        //
	printf("%s%i\n","*p: ",*p);    //
	printf("%s%i\n","p:  ",p);     //
	p = NULL;                       //
	//printf("%s%i\n","*p: ",*p);    // are you allowed to dereference NULL? (rem: *p on the RHS means "dereference p")
	//printf("%s%i\n","p:  ",p);     // but can we still "see" p?
	//char* q = nullptr;              // what is the nullptr?
	//int* r = nullptr;               // is this another nullptr?
	//r = q;                         // legal? are r and q the same type?
	//cout << r;                      // legal?
	//cout << *r;                     // legal?
	//cout << nullptr;                 // legal?
	//r = 0;                          // legal?
	//q = NULL;                       // legal?
}