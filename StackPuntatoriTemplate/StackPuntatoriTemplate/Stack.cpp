#include "Stack.h"

template <class tipo>
Stack<tipo>::Stack(){
	L = 0;
}

template <class tipo>
void Stack<tipo>::Push(tipo x) {
	Nodo<tipo> *P = new Nodo(x);
	P->setPunt(L);
	L = P;
}

template <class tipo>
void Stack<tipo>::Pop() {
	if (L->getPunt() != 0) {
		Nodo<tipo>* temp = L;
		L = temp->getPunt();
		delete temp;
	}
}

template <class tipo>
bool Stack<tipo>::Empty() {
	return (primo == 0);
}

template <class tipo>
Stack<tipo>::~Stack(){
}
