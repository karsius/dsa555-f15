#include "timer.h"
#include <iostream>
#include <cstdlib>
using namespace std;
int iterativeFactorial(int n){
	int rc=1;
	for(int i=n;i>=1;i--){
		rc=rc*i;
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
int iterativeFibonacci(int n){
	int fn1; //fn-1
	int fn2; //fn-2
	int rc;
	if(n==0){
		rc=0;
	}
	else if(n==1){
		rc=1;
	}
	else{
		fn2=0;
		fn1=1;
		for(int i=2;i<=n;i++){
			rc=fn1+fn2;
			fn2=fn1;
			fn1=rc;
		}
	}
	return rc;
}

//returns the nth fibonacci number
//f0 is 0
//f1 is 1
//f2 is f1 + f0
//f3 is f2 + f1
//fn is fn-1 + fn-2
int fib(int n){
	int rc;
	if(n == 0){
		rc =0;
	}
	else if(n == 1){
		rc=1;
	}
	else{
		rc = fib(n-1) + fib(n-2);
	}
	return rc;
}

//returns the b to the power of n, b^n
//b*b*b...*b  (n times)
int iterativePower(int b,int n){
	int rc=1;
	for(int i=1;i<= n;i++){
		rc=rc*b;
	}
	return rc;
}

//recursive power function
int power(int b, int n){
	int rc=1;
	if(n > 0){
		rc=power(b,n/2);
		rc = rc* rc;
		if (n%2 == 1){
			rc = rc* b;
		}
	}
	return rc;
}



int main(int argc, char* argv[]){
	Timer t;
	Timer t2;
	int n=atoi(argv[1]);
	t.start();
	int x=iterativeFibonacci(n);
	t.stop();
	cout << "itFib (" << n <<") = " << x << endl;
	cout << "time: " << t.currtime() << endl;

	t2.start();
	int y=fib(n);
	t2.stop();
	cout << "fib (" << n <<") = " << y << endl;
	cout << "time: " << t2.currtime() << endl;

}
