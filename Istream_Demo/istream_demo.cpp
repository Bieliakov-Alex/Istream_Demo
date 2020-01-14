#include <iostream>
#include <iterator>
#include <fstream>
#include <string>

int main() {
	std::ifstream f1("test.txt");
	f1.unsetf(std::ios_base::skipws);
	std::istream_iterator<char> stream(f1);
	std::istream_iterator<char> eof;
	while (stream != eof) {
		std::cout << *stream++;
	}
	std::cout << std::endl;

	return 0;
}