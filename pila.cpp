#include <iostream>
#include 
int main() {
	std::stack<int> s;
	s.push(10);
	s.push(20);
	std::cout<< s.stop() << std::endl;//20
	s.pop();
	std::cout<< s.top() << std::endl;//10

// Using manual stack
std::cout <<"manual stack"<<std::endl;
push(30); //
push(40);
std::cout<< pop() <<std::endl;
std::cout<< pop() <<std::endl;
}
