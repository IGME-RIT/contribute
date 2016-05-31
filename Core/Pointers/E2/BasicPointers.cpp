#include "Headers.h">

using namespace std;

/*************************************************************************************************
* Pointers:                     http://msdn.microsoft.com/en-us/library/89e4h321.aspx
* * (or, Indirection) Operator: http://msdn.microsoft.com/en-us/library/fw63e3c3.aspx
* & (or, Address-Of) Operator:  http://msdn.microsoft.com/en-us/library/64sa8b1e
* Comparing * and & Operators:  http://msdn.microsoft.com/en-us/library/caaw7h5s
* Style:                        http://www2.research.att.com/~bs/bs_faq2.html#whitespace
* Pointer Fun w/Binky:          http://www.youtube.com/watch?v=f-pJlnpkLp0
**************************************************************************************************/
void BasicPointers::testBasicPointer(){

		cout << "1. Testing basic pointers: " << endl; // below, what does each line do and/or output?
		int *p1;                      // 
		int* p2;                      // 
		int a = 10;                   // 
		p1 = &a;                      // 
		p2 = &a;                      //
		printf("%s%i\n","p1: ",*p1);  // 
		printf("%s%i\n","p2: ",*p2);  //

		/*http://www.cplusplus.com/doc/tutorial/pointers/#declaration*/
		int* q1, q2;                  // is q2 a pointer-to-int or just int?
		int *r1, *r2;                 // is r2 a pointer-to-int or just int?
		int b = 20;                   //
		//q2 = b;                       //
		//q2 = &b;                      //
		//r2 = b;                       //
		//r2 = &b;                      //
	}
