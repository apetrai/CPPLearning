#include <iostream>
#include <stdexcept>

int main() {
	double x, y;
	try {
	std::cin >> x >> y;
	std::cout << x / y << std::endl;
	if (x == 0 || y == 0)
		throw std::runtime_error("You cannot divide with 0");
	
	else if(x == 0 && y == 0)  { throw std::runtime_error("You cannot divide with 0!"); }
	} catch (std::runtime_error err) {
		std::cout << "Try again! " << err.what();
		x = 0;
		y = 0;
		std::cin >> x >> y;
		std::cout << x / y;
		if ((x == 0 || y == 0) || (x == 0 && y == 0)) throw std::runtime_error("I told you, you cannot divide with 0!!");
	}
	
	return 0;
}
