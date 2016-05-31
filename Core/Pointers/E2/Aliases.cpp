#include "Headers.h"

void Aliases::testAliases() {
#pragma region notes
	/******************************************************************
	*  Java/C# style example -- predict (and then confirm) the output:
	*     void test1() {
	*        Object t1 = new Object();
	*        Object t2 = t1;
	*        test2(t2);
	*        //print(t2);            // output or error?
	*        //print(t1.equals(t2)); // output or error?
	*     }
	*     void test2(Object t2) { t2=null; }
	*******************************************************************/
#pragma endregion
	cout << "4. Testing aliases: " << endl; // below, what does each line do and/or output?
	int i;                            // 
	int* p;                           //
	int* q;                           //
	p = &i;                          //
	*p = 30;                          //
	q = p;                           //
	*q = 40;                          //
	printf("%s%i\n","*p: ",*p);      //
	printf("%s%i\n","*q: ",*q);      //
	printf("%s%i\n","i:  ", i);      //
}