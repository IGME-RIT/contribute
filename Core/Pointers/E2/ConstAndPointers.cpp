#include "Headers.h"

void ConstAndPointers::testConstAndPointers(){
	/*******************************************************************************************
	* MSDN const & volatile: http://msdn.microsoft.com/en-us/library/145yc477
	* MSDN const:            http://msdn.microsoft.com/en-us/library/07x6b05d
	* const Correctness:     http://www.parashift.com/c++-faq/const-correctness.html
	*                        http://www.cprogramming.com/tutorial/const_correctness.html
	* the trick? "read pointer declarations from right to left"
	*            (from http://www.parashift.com/c++-faq/const-ptr-vs-ptr-const.html)
	********************************************************************************************/
	cout << "6. Testing const: " << endl;                 // What fails below when you use const?
	double value = 1.0;                                   // needed below
	double tmp = 2.0;                                     // needed below


	cout << "Const value: " << endl;                      // TEST CONSTANT VALUE
	double /*const*/ * a = &value;                       // what does this statement mean? (uncomment the "/*const*/")
	printf("%s%3.1f\n","*a: ",*a);                      //
	*a = 2.0;                                            //
	a = &tmp;                                            //
	printf("%s%3.1f\n","*ptr: ",*a);                     //


	cout << "Const pointer: " << endl;                    // TEST CONSTANT POINTER
	double* /*const*/ b = &value;                        // what does this statement mean? (uncomment the "/*const*/")
	printf("%s%3.1f\n","*b: ",*b);                      //
	*b = 2.0;                                            // 
	b = &tmp;                                            //
	printf("%s%3.1f\n","*b: ",*b);                      //


	cout << "Const value AND constant pointer:" << endl;  // TEST CONSTANT POINTER TO CONSTANT VALUE
	 /*const*/ double* /*const*/ c = &value;             //
	printf("%s%3.1f\n","*c: ",*c);                      //
	*c = 2.0;                                            //
	c = &tmp;                                            //
	printf("%s%3.1f\n","*c: ",*c);      
}