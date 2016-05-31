#include "Headers.h"

void ReferencesAndArrays::TestReferencesAndArrays(){
	//http://msdn.microsoft.com/en-us/library/dz43scw4.aspx
	//http://msdn.microsoft.com/en-us/library/1sf8shae.aspx
	//http://www.parashift.com/c++-faq-lite/references.html#faq-8.1
	int a[] = {10, 20};   //
	//int& b = a;          //
	//int& c[5];            //
	int x = 10;	          //
	int& ref = x;          //
	int d[] = {ref};      //
	cout << d[0] << endl; //
}