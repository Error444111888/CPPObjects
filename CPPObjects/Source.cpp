// Objects - by Ray


#include <iostream>
#include <string>
#include "Rectangle.h"

using namespace std;
using std::cout;
using std::endl;



int main()

{
	int x;
	int y{};
	int z{ 1 };

	Rectangle uninitialized;
	Rectangle value{};
	Rectangle aggregate{ 2,3 };

	value._width = 2;
	value._height = 2;


	Rectangle outer;
	Rectangle inner;

	outer._width = 10;
	outer._height = 10;

	inner._width = 5;
	inner._height = 5;



	cin.get();

}