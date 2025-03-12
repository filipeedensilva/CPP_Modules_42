#include "../includes/MutantStack.hpp"

int	main(void) {
	MutantStack<int> intstack;
	intstack.push(5);
    intstack.push(17);
    
    std::cout << "Top: " << intstack.top() << std::endl; // 17
    std::cout << "Size: " << intstack.size() << std::endl; // 1

    intstack.push(3);
    intstack.push(5);
    intstack.push(737);
    intstack.push(0);

    std::cout << "Iterating through stack:" << std::endl;
    MutantStack<int>::iterator it = intstack.begin();
    MutantStack<int>::iterator ite = intstack.end();
    while (it != ite) {
        std::cout << *it << std::endl;
        it++;
    }

   return (0);

}
