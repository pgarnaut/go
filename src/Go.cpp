// Go.cpp : Defines the entry point for the console application.
//

#include <Windows.h>
#include <iostream>
#include <vector>

int main(int argc, char ** argv)
{
	std::vector<int> foo;
	foo.push_back(1);
	foo.push_back(2);
	foo.push_back(3);
	foo.push_back(4);
	foo.push_back(5);
	
	std::cout << "val: " << (&(foo[2]))[1] << std::endl;
	
	/*std::vector<int> &tmp = (std::vector<int> &)foo[2];
	std::cout << "val: " << tmp[1] << std::endl;*/

	//std::vector<int> tmp2 = foo.begin() + 2;
	std::cout << "val: " << ((std::vector<int> &)(foo.begin() + 2))[1] << std::endl;
	int *vals = &foo[0] + 2;
	std::cout << "val: " << vals[1] << std::endl;

	Sleep(10000);
	return 0;
}

