#include "link.h"
#include<iostream>
using namespace std;


link::link()
{
	head = new node;
	head->data = 0;
	head->next = NULL;
}
bool link::emptylist()
{
	if (head->next == NULL)
	{
		return true;
	}
	else
		return false;
}
void link::insert_begin(int val)
{
	node* newnode = new node;
	newnode->data = val;
	newnode->next = NULL;
	if (emptylist())
	{
		head->next = newnode;
	}
	else
	{
		newnode->next = head->next;
		head->next = newnode;

	}
}
void link::display()
{
	if (head == NULL)
	{
		cout << "List is empty " << endl;
	}
	else
	{
		node* temp = head->next;
		while (temp != NULL)
		{
			cout << temp->data << "->";
			temp = temp->next;
		}
	}
}
void link::insert_after(int v, int pos)
{
	node* newnode = new node;
	newnode->data = v;
	if (emptylist())
	{
		head->next = newnode;
	}
	else
	{
		node* temp = head->next;
		int i = 0;
		while (temp->next != NULL)
		{

			if (i == pos)
			{
				newnode->next = temp->next;
				temp->next = newnode;
			}

			temp = temp->next;
			i++;
		}
	}

}
void link::insert_end(int dat)
{
	node* newnode = new node;
	newnode->data = dat;
	newnode->next = NULL;
	if (emptylist())
	{
		head->next = newnode;
	}
	else
	{
		node* temp = head->next;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void link::delete_start()
{
	if (emptylist())
	{
		cout << "List is empty";
	}
	else
	{
		node* temp = head->next;
		head->next = temp->next;
		delete temp;

	}
}
void link::delete_end()
{
	if (emptylist())
	{
		cout << "List is empty " << endl;
	}
	else
	{
		node* temp = head->next;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}

		node* deletenode = temp->next;
		temp->next = NULL;
		delete deletenode;


	}

}
void link::delete_after(int position)
{
	if (emptylist())
	{
		cout << " List is empty " << endl;
	}
	else
	{
		node* temp = head->next;
		node* ptr = temp->next->next;
		int i = 1;
		while (temp->next != NULL)
		{
			if (i == position)
			{
				temp->next = ptr->next;
				delete ptr;
			}
			temp = temp->next;
			i++;
		}
	}
}
