#include "Stack.h"

template <class tipo>
Stack<tipo>::Stack(){
	primo = 0;
	ultimo = 0;
}

template <class tipo>
void Stack<tipo>::Push(tipo x) {
	Nodo<tipo> *P = new Nodo(x);
	P->setPunt(ultimo);
	ultimo = P->getPunt();
}

template <class tipo>
void Stack<tipo>::Pop() {
	if (primo->getPunt() != 0) {
		Nodo<tipo>* temp = primo;
		primo = temp->getPunt();
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
