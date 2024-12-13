#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy) {
	*this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	if (this != &copy) {
		const_cast<std::string&>(this->_target) = copy._target;
	}
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const {
	return (this->_target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const &b) const {
	beExecuted(b);
	std::ofstream	outfile;
	outfile.open((getTarget() + "_shrubbery").c_str());
	outfile << 
        "              _{\\ _{\\{\\/}/}/}__\n"
        "             {/{/\\}{/{/\\}(\\}{/\\} _\n"
        "            {/{/\\}{/{/\\}(_)}{/{/\\}  _\n"
        "         {\\{/\\(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
        "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
        "       _{\\{/{/{\\{/{/(_)}/}/}{\\(/}/}/}\n"
        "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
        "      _{\\{/{\\{/(_)}{/}{/{/\\}\\})\\}{/\\}\n"
        "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)}/}\\}\n"
        "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
        "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
        "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
        "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)}/}\\}\n"
        "         {/(/{/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
        "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
        "            {/{/{\\{\\/}{/{\\{\\{(_)}/}\n"
        "             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
        "              {){/ {\\/}{\\/} \\}\\}\n"
        "                   \\.-'.-/\n"
        "          __...--- |'-.-'| --...__\n"
        "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
        " -\"    ' .  . '    |.'-._| '  . .  '   \n"
        " .  '-  '    .--'  | '-.'|    .  '  . '\n"
        "          ' ..     |'-_.-|\n"
        "  .  '  .       _.-|-._ -|-._  .  '  .\n"
        "              .'   |'- .-|   '.\n"
        "  ..-'   ' .  '.   `-._.-'   .'  '  - .\n"
        "   .-' '        '-._______.-'     '  .\n"
        "        .      ~,\n"
        "    .       .   |\\   .    ' '-.\n";
}
