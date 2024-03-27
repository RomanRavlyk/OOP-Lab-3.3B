#include <iostream>
#include "Pair.h"
#include <sstream>
using namespace std;

Pair::Pair() {
	int1 = 0;
	int2 = 0;
}

Pair::Pair(int value, int value1) {
	int1 = value;
	int2 = value1;
}

Pair::Pair(const Pair& p) {
	int1 = p.int1;
	int2 = p.int2;
}



bool operator >=(const Pair& p1, const Pair& p2) {
	return (p1.int1 > p2.int1) || (p1.int1 == p2.int1 && p1.int2 >= p2.int2);
}

bool operator <=(const Pair& p1, const Pair& p2) {
	return (p1.int1 < p2.int1) || (p1.int1 == p2.int1 && p1.int2 <= p2.int2);
}

bool operator !=(const Pair& p1, const Pair& p2) {
	return !(p1 == p2);
}

bool operator >(const Pair& p1, const Pair& p2) {
	return !(p1 <= p2);
}

bool operator <(const Pair& p1, const Pair& p2) {
	return !(p1 >= p2);
}

bool operator ==(const Pair& p1, const Pair& p2) {
	return p1.int1 == p2.int1 && p1.int2 == p2.int2;
}

ostream& operator << (ostream& out, const Pair& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Pair& r)
{
	cout << "Enter int1: ";
	in >> r.int1;
	cout << "Enter int2: ";
	in >> r.int2;
	cout << endl;
	return in;
}

Pair::operator string() const {
	stringstream ss;
	ss << "Your integers: ";
	ss << int1 << " " << int2;
	ss << endl;
	return ss.str();
}
