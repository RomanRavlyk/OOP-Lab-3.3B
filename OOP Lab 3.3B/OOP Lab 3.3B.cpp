#include "Pair.h"
#include <iostream>
#include "VectorN.h"
using namespace std;

int main()
{
	Pair p1(4, 4);
	Pair p2(4, 3);
	cout << p1;
	cout << p2;
	cout << "> ";
	if (p1 > p2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (p1 < p2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (p1 == p2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (p1 >= p2) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (p1 <= p2) { cout << "yes"  ; }
	else cout << "no" << endl;
	cout << "!= ";
	if (p1 != p2) { cout << "yes" << endl; }
	else cout << "no" << endl;

	VectorN vector;

	VectorN vector1;

	cin >> vector;
	cout << vector;
	cin >> vector1;
	cout << vector1;

	cout << "Vector 1 length: " << ~vector << endl;
	
	

	cout << "Are vectors equal?: ";
	if (vector == vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Are vector1 > vector2: ";
	if (vector > vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Are vector1 < vector2: ";
	if (vector < vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Are vectors length equal?: ";
	if (vector != vector1) { cout << "no" << endl; }
	else cout << "yes" << endl;

	cout << "Are vector1 length > vector2 length: ";
	if (vector >= vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "Are vector1 length < vector2 length: ";
	if (vector <= vector1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	vector * 4;
	cout << "vector 1 after scalar mult: " << vector;

	return 0;
}

