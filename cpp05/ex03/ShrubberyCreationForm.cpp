#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("Shrubbery Creation Form", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("Shrubbery Creation Form", 145, 137, target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy):Form(copy)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	this->_target = rhs._target;
	this->_signed = rhs.getSignState();
	return *this;
}

void					ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::string		newname = this->_target + "_shrubbery";
	std::ofstream   newfd(newname.c_str());
    if (!newfd.is_open())
    {
        std::cout << "Couldn't open/create new file" << std::endl;
        return;
    }
	newfd << "	ccee88oo\n" << \
	"  C8O8O8Q8PoOb o8oo\n" << \
	" dOB69QO8PdUOpugoO9bD\n" << \
	"CgggbU8OU qOp qOdoUOdcb\n" << \
	"    6OuU  /p u gcoUodpP\n" << \
	"      \\\\\\//  /douUP\n" << \
	"        \\\\////\n" << \
	"         |||/\\\n" << \
	"         |||\\/\n" << \
	"         |||||\n" << \
	"   .....//||||\\....\n";

	newfd.close();
}
