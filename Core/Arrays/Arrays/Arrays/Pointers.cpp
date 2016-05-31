#include "Headers.h"


void Pointers::TestPointers(){

	#pragma region Pointers (1-D)
	// http://msdn.microsoft.com/en-us/library/x96cyk9c.aspx
	// http://msdn.microsoft.com/en-us/library/2fsfz2cx.aspx

	// http://msdn.microsoft.com/en-us/library/1kct162s.aspx
	 int a[2] = {3,4};                       // Stack or Heap allocation?
	 cout << *a << endl;                     //
	 cout << *(a + 1) << endl;               //
	 *a = 5;                                 //
	 *(a+1) = 6;                             // 
	 print1(a,2);                            //
	 int* p = (int*)calloc(2,sizeof(int));   // what does calloc do?
	 print1(p,2);                            //
	 //how to use free on p?                   // and why?
	 //int b[] = new int[4];                 // 
	 int* c = new int[4];                  // Stack or Heap allocation?
	 //
	 //how to delete o2b?                      //
	 //int o3[] = (int*)malloc(2*sizeof(int)); //
	 int d[] = {10, 20};                   //
	 int e[2] = {10, 20};                  // 
	 int* f = d;                         //
	 int* g = e;                         //
	 cout << f[0] << endl;                 //

#pragma endregion

#pragma region Pointers (2-D)
	// See http://avsharath.googlepages.com/2dArray.png
	 int q[2][3] = { 1, 2, 3, 4, 5, 6} ;  //
	 cout << *( *(q + 0) + 0);            // 
	 cout << *( *(q + 0) + 1);            //
	 cout << *( *(q + 1) + 2);            //
	// how to output everything as 123/456? //
#pragma endregion
}



