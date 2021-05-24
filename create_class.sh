#! usr/bin/bash

for class in "$@"
do
	echo -n "#ifndef __" >${class}.hpp
	echo -n ${class} | tr a-z A-Z >> ${class}.hpp
	echo -n "__
# define __" >> $class.hpp
	echo -n ${class} | tr a-z A-Z >> $class.hpp
	echo "__

class $class
{
	public:
		$class();
		$class(const $class& copy);
		virtual ~$class();

		$class&	operator=(const $class& rhs);
	private:
		/*args*/
};

#endif" >> ${class}.hpp
	echo "#include \"$class.hpp\"

$class::$class(){}

$class::$class(const $class& copy)
{
	*this = copy;
}

$class::~$class(){}

$class&	$class::operator=(const $class& rhs){}" > ${class}.cpp
done