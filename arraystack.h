
template<class T>
class Stack{
	T* data_;
	int maxSize_;
	int currSize_;
	void grow(){
		T* tmp=new T[maxSize_*2];
		for(int i=0;i<currSize_;i++){
			tmp[i]=data_[i];
		}
		delete data_;
		data_=tmp;
		maxSize_=maxSize_*2;
	}
public:
	Stack(max=100){
		data_=new T[max];
		maxSize_=max;
		currSize_=0;
	}
	void push(const T& dat){
		if(currSize_ == maxSize_){
			grow();
		}
		data_[currSize_]=dat;
		currSize_++;
		
	}
	void pop(){
		currSize_--;
	}
	const T& top(){
		return data_[currSize_-1]
	}
	bool isEmpty() const;
};