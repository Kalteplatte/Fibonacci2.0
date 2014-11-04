#include <vector>
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

unsigned long Fibonacci1 (int n){        //recursive function
	if (n<=1)	return n;

	return Fibonacci1(n-1)+Fibonacci1(n-2);
}




unsigned long Fibonacci2 (int n){      //function with linear time and linear memory
	if(n<=1)	return n;
	vector <int> fib (n);
	fib[0]=0;
	fib[1]=1;
	int i=2;

	while(i<(n+1)){
		fib[i]=fib[i-1]+fib[i-2];
		i++;
	}
	return fib[n-1];
}




unsigned long Fibonacci3 (int n){  //function with linear time and constant memory
	if(n<=1)	return n;
	int fib [3];
	fib[0]=0;
	fib[1]=1;
	int i=2;
	while(i<n+1){
		fib[2]=fib[1]+fib[0];
		fib[0]=fib[1];
		fib[1]=fib[2];
		i++;
	}
	return fib[2];
}

void test(){
if (Fibonacci1(1)!=1) std::cout << "Fehler bei Fibonacci1 für n=1!";
if (Fibonacci1(10)!=55) std::cout << "Fehler bei Fibonacci1 für n=10!";
if (Fibonacci1(25)!=75025) std::cout << "Fehler bei Fibonacci1 für n=25!";
if (Fibonacci1(43)!=433494437) std::cout << "Fehler bei Fibonacci1 für n=43!";
if (Fibonacci2(1)!=1) std::cout << "Fehler bei Fibonacci2 für n=1!";
if (Fibonacci2(10)!=55) std::cout << "Fehler bei Fibonacci2 für n=10!";
if (Fibonacci2(25)!=75025) std::cout << "Fehler bei Fibonacci2 für n=25!";
if (Fibonacci2(43)!=433494437) std::cout << "Fehler bei Fibonacci2 für n=43!";
if (Fibonacci3(1)!=1) std::cout << "Fehler bei Fibonacci3 für n=1!";
if (Fibonacci3(10)!=55) std::cout << "Fehler bei Fibonacci3 für n=10!";
if (Fibonacci3(25)!=75025) std::cout << "Fehler bei Fibonacci3 für n=25!";
if (Fibonacci3(43)!=433494437) std::cout << "Fehler bei Fibonacci3 für n=43!";
}




int main(){
test();
return 0;
}



