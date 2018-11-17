#pragma once
#include"Nodo.h"
#include"Nodo.cpp"
#define DIM 100

template <class tipo>
class Stack{
private:
	Nodo<tipo>* primo;
	Nodo<tipo>* ultimo;

public:
	Stack();
	void Push(tipo);
	void Pop();
	bool Empty();
	~Stack();
};

