//Fibonacci Series using Recursion 
#include<bits/stdc++.h> 
using namespace std; 

int fib(int n); 

int main () 
{ 
	int n; 
  cout << "\nEnter N to find Nth term in the Fibonacci Series: ";
  cin >> n;
	cout << endl << n << " value in the series is: " << fib(n); 
	getchar(); 
	return 0; 
} 

int fib(int num) 
{ 
	if (num == 0) 
		return 0; 
  else if (num == 1)
    return 1;
  else
	  return (fib(n-1) + fib(n-2)); 
}
