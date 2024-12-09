#include "../includes/Form.hpp"
#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main(void) {
	Bureaucrat Nami("Nami", 1);
	Bureaucrat Zoro("Zoro", 120);
	Form F07("Funds for navigations tools", 20, 3);

	Zoro.signForm(F07);
	Nami.signForm(F07);

	return (0);
}
