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
		$class($class& copy);
		~$class();

		$class&	operator=($class const& rhs);
	private:
		/*args*/
};

#endif" >> ${class}.hpp
	echo "#include \"$class.hpp\"

$class::$class(){}
$class::$class($class& copy)
{
	*this = copy;
}
$class::~$class(){}

$class&	$class::operator=($class const& rhs){}" > ${class}.cpp
done