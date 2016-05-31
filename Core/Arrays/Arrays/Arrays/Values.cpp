#include "Headers.h"


void Values::TestValues() {

cout << "Test Values";
#pragma region Insert values
	// http://msdn.microsoft.com/en-us/library/1wz9z5b3.aspx
	// http://msdn.microsoft.com/en-us/library/th52k9c8.aspx
	int a[2];             //
	a[0] = 10;            //
	a[1] = 20;            //
	a[2] = 30;            //
	int b[2] = {10, 20};  //
#pragma endregion

#pragma region Default values?
	int c[2];              //
	cout << c[0] << endl;  // 
	// Note: after seeing the relation between pointers and arrays,
	// can you explain the above behavior?
#pragma endregion

#pragma region Get values
	// http://msdn.microsoft.com/en-us/library/1wz9z5b3.aspx
	// http://msdn.microsoft.com/en-us/library/th52k9c8.aspx
	 int d[2];              //
	 d[0] = 10;             //
	 d[1] = 20;             //
	 cout << d[0] << endl;  //
	 cout << d[1] << endl;  //
#pragma endregion

}