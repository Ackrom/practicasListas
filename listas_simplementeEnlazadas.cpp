#include<iostream>
using namespace std;

template<typename T>
struct Node{
    T cont;
    Node *pProx;
};
template<class T>
class List{
	Node<T>* first;
	Node<T>* last;
	Node<T>* aux;
	public:
		
	List();
	void add(T);
	void move(int);
	Node<T> getFirst();
	void getAllValues();
};
template<typename T>
void List<T>::getAllValues(){
	if( first == NULL )
			return;
	aux = first;
	while(true){
		cout << aux -> cont << endl;
		if ( (*aux).pProx == NULL )
			break;
		else
			aux = (*aux).pProx;
	}
}
template<typename T>
void List<T>::add(T value){
	aux = new Node<T>;
	aux -> cont = value;
	aux -> pProx = NULL;	
	if(first == NULL && last == NULL){	
		first = aux;
		last = aux;
	}else{
		last -> pProx = aux;
		last = aux;
	}
	
}
template<typename T>
Node<T> List<T>::getFirst(){
	return *first;
}
template<typename T>
List<T>::List(){
	first = NULL;
	last = NULL;
	aux = NULL;
}

template<typename T>
void List<T>::move(int cant){
	for(int i=0;i<cant;i++){
		last -> pProx = first;
		last = first;
		first = first->pProx;
		last ->pProx = NULL;
	}
}
int main(){
	
	
	List<int> h;
	
	h.add(4);
	h.add(6);
	h.add(8);
	h.add(10);
	h.add(12);
	h.add(14);
	h.getAllValues();
	cout << "=================== MOVE ==================" << endl;
	h.move(4);
	h.getAllValues();
	//cout << h.getFirst().cont << endl;
    return 0;
}

