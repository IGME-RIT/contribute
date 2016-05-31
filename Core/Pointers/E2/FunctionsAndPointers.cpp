#include "Headers.h"

void FunctionsAndPointers::testFunctionsAndPointers() {
	cout << "5. Testing functions and pointers: " << endl; // below, what does each line do and/or output?
	int* p;                        //
	int i = 1;                     //
	p = &i;                       //
	printf("%s%i\n","*p: ",*p);   //
	test1(p);                      // 
	printf("%s%i\n","*p: ",*p);   // 
	test2(p);                      // 
	printf("%s%i\n","*p: ",*p);   //
	int a = 1;                     // 
	int b = 2;                     //
	int* q = &a;                  //
	int* r = &b;                  //
	printf("%s%i\n","*q: ",*q);   //
	printf("%s%i\n","*r: ",*r);   //
	test3(q,r);                   //
	printf("%s%i\n","*q: ",*q);   //
	printf("%s%i\n","*r: ",*r);   //
	printf("%s%i\n","a: ",a);     //
	printf("%s%i\n","b: ",b);     //
	test3(&a,&b);                 //
	printf("%s%i\n","a: ",a);     //
	printf("%s%i\n","b: ",b);     //
	int* s = test4();              //
	printf("%s%i\n","*s: ",*s);   // explain the WARNING mesg
}


void FunctionsAndPointers::test1(int* p) { // is this p the SAME variable as the variable passed to test1? (consider the notion of stack frames in function calls)
	int i = 10;
	p = &i;
}
void FunctionsAndPointers::test2(int* p) {
	*p = 10;
}
void FunctionsAndPointers::test3(int *p, int* q) { // which is essentially "swap", e.g., http://www.cs.utsa.edu/~wagner/CS2213/swap/swap.html
	int tmp = *p;
	*p = *q;
	*q = tmp;

}

int* FunctionsAndPointers::test4() {
    int i = 100;
    return &i;
}