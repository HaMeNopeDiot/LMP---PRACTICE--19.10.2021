#include "Header.h"

Queue::Queue()
{
	head = nullptr;
	tail = nullptr;
}
bool Queue::isEmpty()
{
	return head == nullptr;
}
void Queue::deQueue()
{
	if (!isEmpty())
	{
		Node* p = head;
		head = head->next;
		p->next = nullptr;
		delete p;
		p = nullptr;
	}
}
void Queue::enQueue(int elem)
{
	Node* p = new Node;
	p->data = elem;
	p->next = nullptr;
	if (tail)
	{
		tail->next = p;
		tail = p;
	}
	else
	{
		head = p;
		tail = p;
	}
}
bool Queue::getFront(int& elem)
{
	bool canGet = false;
	if (!isEmpty())
	{
		canGet = true;
		elem = head->data;
	}
	return canGet;
}
void Queue::clear()
{
	while (!isEmpty())
		deQueue();
}
Queue::~Queue()
{
	clear();
}