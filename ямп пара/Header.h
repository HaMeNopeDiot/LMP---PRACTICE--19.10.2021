#pragma once
class Queue {
	struct Node {
		int data;
		Node* next;
	};
	Node* head;
	Node* tail;
public:
	Queue();
	~Queue();
	bool isEmpty();
	void enQueue(int elem);
	void deQueue();
	bool getFront(int& elem);
	void clear();
};