#include"link.h"
#include<iostream>
using namespace std;
int main()
{
	link obj;
	obj.emptylist();
	obj.insert_begin(5);
	obj.insert_begin(9);
	obj.insert_begin(10);
	obj.display();
	obj.insert_end(3);
	obj.insert_end(4);
	cout << "\n insertion at the end of list " << endl;
	obj.display();
	obj.insert_after(45, 2);
	cout << "\n node inserted at certain position " << endl;
	obj.display();
	obj.delete_start();
	cout << "\n node deleted from start " << endl;
	obj.display();
	cout << "\n node deleted from end " << endl;
	obj.delete_end();
	obj.display();
	obj.delete_after(2);
	cout << "\n node is deleted from any position " << endl;
	obj.display();

}

