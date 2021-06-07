#ifndef __SERIALIZATION__
# define __SERIAlIZATION__


# include <stdlib.h>
# include <ctime>
# include "Data.hpp"

void*	serialize();
Data*	deserialize(void* raw);

#endif