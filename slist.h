template<class T>
class SList;

template <class T>
class Node{
	friend SList<T>;
	T data_;
	Node<T> next_;
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
public:
	SList(){first_=last_=nullptr;}
	Node<T>* first() const {return first_;}
	Node<T>* last() const {return last_;}
	void insert(T data);
};
//this function inserts data into the front
//of the linked list
template<class T>
void SList<T>::insert(T data){

}

