#include "Headers.h"

void LValuesAndRValues::testLValuesAndRValues() {
	/*****************************************************************************************************************
	* MSDN:  http://msdn.microsoft.com/en-us/library/f90831hc.aspx
	* More detail (modifyable L-values): http://msdn.microsoft.com/en-us/library/bkbs2cds.aspx
	* (you'll see more about L-values and modifiable L-values in arrays, e.g., http://c-faq.com/aryptr/arraylval.html)
	* For example, *p = *q means:
	*	RHS (the *q): GET the value stored at the address pointed by q (or, "q's pointee")
	*	LHS (the *p): PUT the RHS value in p's pointee (the memory address pointed to by p)
	******************************************************************************************************************/
	cout << "7. Testing L- and R-Values (intro): " << endl; // below, what does each line do and/or output?
	int* p;                          //
	int i = 10;                      //
	p = &i;                         //
	*p = 20;                         //
	cout << "i:  " << i << endl;    //
	cout << "p:  " << p << endl;    //
	cout << "*p: " << *p << endl;   //
	cout << "&i: " << &i << endl;   //
	int j = 30;                      //
	int* q = &j;                    //
	*p = *q;                        //
	cout << "i:  " << i << endl;    // 
	p = q;                          //
	*q = 40;                         //
	*p = 50;                         //
	cout << "i:  " << i << endl;    // did i change?
	cout << "j:  " << j << endl;    //
}