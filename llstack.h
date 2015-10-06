template<class T>
class Stack{
public:
	Stack();
	void push(const T&);
	void pop();
	const T& top();
	bool isEmpty() const;
};
