#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <map>
#include <list>
int main()
{	
	std::list<int> list;
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	std::list<int>::iterator it2 = list.begin();
	while (it2 != list.end()) {

		std::cout << *it2 <<  std::endl;
		++it2;
	}
	// std::vector<int> vec;
	// vec.push_back(1);
	// vec.push_back(2);
	// vec.push_back(3);
	// vec.push_back(4);
	// vec.push_back(5);
	// vec.push_back(6);
	// vec.push_back(7);

	// try
	// {
	// 	std::vector<int>::iterator  it = easyfind(map, 8);
	// 	std::cout<<"Value found: "<<*it<<std::endl; 
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout<<"Vector: "<<e.what()<<std::endl;
	// }
}
