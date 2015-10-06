#include "slist.h"
#include <iostream>
using namespace std;

int main(void){
	SList<int> list;
	list.insert(5);
	list.insert(6);
	list.insert(1);
	list.insert(2);
//	list.append(10);
//	list.rmFirst();
//	list.rmLast();
	list.print();
	list.recursiveReverse();

	cout << "****** " << endl;
	list.print();
}