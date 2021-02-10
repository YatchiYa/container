
#ifndef TEST_HPP
# define TEST_HPP

# ifdef def_test_full
#  define FULL
# endif

# include <iostream>
# include "vector.hpp"

# include <vector>
# include <cassert>

void test(std::string const &what) {
	std::cout << "######################################## START TEST " << what << std::endl;
}

void end_test(std::string const &what) {
	std::cout << "######################################## END TEST " << what << '\n' << std::endl;
}

template<typename Container>
void display_container(std::string const &header, Container const &ctn)
{
	typename Container::const_iterator it = ctn.begin();
	typename Container::const_iterator ite = ctn.end();
	std::cout << header;
	if (it == ite)
		std::cout << " empty !";
	std::cout << '\n';
	while (it != ite)
	{
		std::cout << *it;
		if (++it == ite)
			std::cout << '\n';
		else
			std::cout <<  ", ";
	}
}


# include "vector_test.hpp"

#endif
