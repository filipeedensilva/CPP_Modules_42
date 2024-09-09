#include "../includes/Brain.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << std::endl << "==================================" << std::endl << std::endl;

	Animal *pets[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			pets[i] = new Dog();
		else
			pets[i] = new Cat();
		pets[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete pets[i];

	std::cout << std::endl << "==================================" << std::endl << std::endl;

	Dog skye;
	skye.setIdea("I love to play with the ball!\n");
	std::cout << skye.getIdea(0);
	skye.setIdea("I need to take care of my pups!\n");
	std::cout << skye.getIdea(1);	
	std::cout << skye.getIdea(2); // no idea.

	Dog fakeSkye(skye);
	std::cout << fakeSkye.getType() << std::endl;
	std::cout << fakeSkye.getIdea(0);
	std::cout << fakeSkye.getIdea(1);

	std::cout << std::endl << "==================================" << std::endl << std::endl;
}
