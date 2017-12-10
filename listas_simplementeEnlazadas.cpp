#include<iostream>
using namespace std;

template<typename T = int>
struct Node{
    T cont;
    Node *pProx;
};
template<class T>
class List{
    Node* pHead;
    Node* pTail;
    int Cant;
public:
    typedef Node<T>* Position;
    List();
    ~List();
    bool IsEmpty();
    Position First();
    Position Last();
    void Next( &Position Value);
    void Get( &Position Value);
    void Insert( &T Nuevo, Position Value);
    void Delete( Position Value);
    int Size();

};

int main(){
    Node<> a;
    a.conta = 12;
    char b = a.conta;
    cout << b <<endl;



    return 0;
}
List::List(){
    Cant = 0;
    pHead = new Node();
    pTail = Head;
    *pHead.pProx = nullptr;
}
List::~List(){
    Node<T>* pTemp;
    while(pHead != nullptr){
        pTemp = pHead;
        pHead = (*pHead).pProx;
        delete pTemp;
    }
}
List::bool IsEmpty(){
    return *pHead.pProx == nullptr;
}
List::Position First(){
    return pHead;
}
List::Position Last(){
    return pTail;
}
List::void Next( &Position pValue){
    pValue = *pValue.pProx;
}
List::void Get( &Position pValue){
    *(*pValue.pProx).cont;
}
List::void Insert( &T Nuevo, Position pValue){

}
List::void Delete( Position pValue);
List::int Size();
