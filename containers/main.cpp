
#include "test.hpp"
#include <fstream>

int main(void)
{
	std::streambuf *coutbuf = std::cout.rdbuf();

	std::ofstream stdOut("std_out");
    std::cout.rdbuf(stdOut.rdbuf());
	test_Vector<std::vector<int> >();
	stdOut.close();

    std::cout.rdbuf(coutbuf);

	std::ofstream ftOut("ft_out");
    std::cout.rdbuf(ftOut.rdbuf());
	test_Vector<ft::Vector<int> >();
	ftOut.close();

    std::cout.rdbuf(coutbuf);


	return (0);
}
