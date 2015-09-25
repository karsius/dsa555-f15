#include <iostream>
using namespace std;

template<class T>
class SList;

template <class T>
class Node{
	friend SList<T>;
	T data_;
	Node<T>* next_;
public:
	Node(T data,Node<T>* next=nullptr);
	T data() const{return data_;}
};

template <class T>
Node<T>::Node(T data,Node<T>* next){
	data_=data;
	next_=next;
}

template <class T>
class SList{
	Node<T>* first_;
	Node<T>* last_;
	void rrwork(Node<T>* curr);
public:
	SList(){first_=last_=nullptr;}
	Node<T>* first() const {return first_;}
	Node<T>* last() const {return last_;}
	void insert(T data);
	void print() const;
	void append(T data);
	void rmFirst();
	void rmLast();
};
//this function inserts data into the front
//of the linked list
template<class T>
void SList<T>::insert(T data){
	Node<T>* nn=new Node<T>(data,first_);
	first_=nn;
	if(!last_){
		last_=nn;
	}
}
//remove first node from list
template<class T>
void SList<T>::rmFirst(){
	if(first_){
		Node<T>* rm=first_;
		first_=first_->next_;
		if(!first_){
			last_=nullptr;
		}
		delete rm;
	}
}

//remove last node from list
template<class T>
void SList<T>::rmLast(){
	if(first_){
		Node<T>* rm=last_;
		Node<T>* curr=first_;
		if(rm !=curr){
			while(curr->next_!=rm){
				curr=curr->next_;
			}
			last_=curr;
			last_->next_=nullptr;
		}
		else{
			first_=last_=nullptr;
		}
		delete rm;
	}

}

//
template<class T>
void SList<T>::append(T data){
	Node<T>* nn=new Node<T>(data);
	if(first_){
		last_->next_ = nn;
	}
	else{
		first_=nn;
	}
	last_=nn;
}


template<class T>
void SList<T>::reverse(){
	Node* prev;
	Node* curr;
	Node* next;
	//if statement is true, list has at 
	//least 2 nodes
	if(first_!=last_){
		prev=first_;
		curr=first_->next_;
		next=curr->next_;
		while(!curr){
			curr->next_=prev;
			prev=curr;
			curr=next;
			if(curr)
				next=curr->next_;

		}
		first_->next_=nullptr;
		last_=first_;
		first_=prev;
	}
}

template<class T>
void SList::rrwork(Node<T>* curr);

template<class T>
void SList<T>::recursiveReverse(){
	rrwork(first_);
}


template<class T>
void SList<T>::print() const{
	Node<T>* curr=first_;
	while(curr){
		cout << curr->data_ << endl;
		curr=curr->next_;
	}
}
