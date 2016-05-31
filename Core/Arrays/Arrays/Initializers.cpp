#include "Headers.h"

void Initializers::TestInitializers() {
	// http://msdn.microsoft.com/en-us/library/w7wd1177.aspx
	// http://msdn.microsoft.com/en-us/library/sdwe79a4.aspx
	 int a[2] = {1, 2};         //
	 cout << a[0] << endl;      //
	 cout << a[1] << endl;      //
	 int b[3] = {1, 2};         // 
	 print1(b,3);               //
	 int h[2] = { };            // 
	 cout << h[1] << endl;      //
	 int i[] = {1,2};           //
	 int j[] = {1,2,};          //
	 int k = { 42 };            //
	 cout << k  << endl;        //
}


