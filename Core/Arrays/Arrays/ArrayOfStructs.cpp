#include "Headers.h"


void ArrayOfStructs::TestArrayOfStructs(){
	// http://www.cplusplus.com/doc/tutorial/structures/
	 struct complex {
	    int r;
	    int i;
	 };
	// what does the above block of code do?
	 complex x; x.r=1; x.i=2;  //
	 complex y; y.r=1; x.i=2;  //
	 complex z[] = {x,y};      //
}