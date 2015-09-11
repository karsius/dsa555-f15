#include "timer.h"
int iterativeFactorial(int n){
	int rc=1;
	for(i=n;i>=1;i--){
		rc=rc*n;
	}
	return rc;
}
int fact(int n){
	int rc;
	if(n <= 1){
		rc=1;
		//base case
	}
	else{
		rc = n * fact(n-1);
	}
	return rc;
}

//returns the nth fibonacci number
//f0 is 0
//f1 is 1
//f2 is f1 + f0
//f3 is f2 + f1
//fn is fn-1 + fn-2
int iterativeFibonacci(int n);

//returns the nth fibonacci number
//f0 is 0
//f1 is 1
//f2 is f1 + f0
//f3 is f2 + f1
//fn is fn-1 + fn-2
int fib(int n);

//returns the b to the power of n, b^n
//b*b*b...*b  (n times)
int iterativePower(int b,int n);

//recursive power function
int power(int b, int n);



int main(void){
	Timer t;
	t.start();

	int x=fact(4);
	t.stop();
	cout << t.currtime() << endl;
}
