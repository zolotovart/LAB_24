#include <stdio.h>
#include <Windows.h>
void G3(int n);
void F3(int n) { // ЗАДАЧА 7
	if (n > 0)
		G3(n - 1);
}
void G3(int n) { 
	printf("*");
	if (n > 1)
		F3(n - 3);
}
void F2(int n) { // задача 6
	printf("%d\n", n);
	if (n < 5) {
		F2(n + 1);
		F2(n + 3);
	}
}
void F1(int n){ // задача 5
	if (n > 2) {
		printf("%d\n", n);
		F1(n - 3);
		F1(n - 4);
	}
}
void recEGE1(int n) { //задача 4
	if (n >= 1) {
		printf(" %d", n);
		recEGE1(n - 1);
		recEGE1(n - 1);
	}
}
void f1(int n) { // task 3.1
	printf(" %d", n);
	if (n > 1) {
		f1(n - 2);
	}
}
void f2(int n) {  // task 3.2
	if (n > 1) {
		f2(n - 2);
	}
	printf(" %d", n);
}
void f3(int n) {   // task 3.3
	printf(" %d", n);
	if (n > 1){
		f3(n - 2);
		printf(" %d", n);
	}
}
long fuct2(int n) {
	if (n == 0) {
		return 1;
	}
	long res = fuct2(n - 1) * n;
	return res;
}

void main() {
	int n = 5;
	long f = fuct2(n);
	printf("%d! = %ld\n", n, f);
	//f1(11);
	//f2(11);
	//f3(11);
	//recEGE1(3);
	//F1(10);
	F2(1);
	//F3(11);
}

