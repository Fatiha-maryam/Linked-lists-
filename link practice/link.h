#pragma once
#include"node.h"
class link
{
public:
	node* head;
	link();
	bool emptylist();
	void insert_begin(int val);
	void insert_end(int dat);
	void insert_after(int v, int pos);
	void delete_start();
	void delete_end();
	void delete_after(int position);
	void display();
};


