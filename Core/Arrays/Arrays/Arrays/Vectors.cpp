#include "Headers.h"

void Vectors::TestVectors(){
	//http://msdn.microsoft.com/en-us/library/bb386284.aspx
	//http://www.cplusplus.com/reference/stl/vector/vector/
	//http://www.dreamincode.net/forums/showtopic33631.htm
	//http://www.yolinux.com/TUTORIALS/LinuxTutorialC++STL.html#VECTOR
	//Demo program:
	vector< vector<int> > v(2, vector<int>(2,0));
	v[0][0]=1; v[0][1]=2;
	v[1][0]=3; v[1][1]=4;
	unsigned int row, col;
	for (row=0; row < v.size(); row++) {
		for (col=0; col < v[row].size(); col++)
			cout << v[row][col] << " ";
		cout << endl;
	}
}