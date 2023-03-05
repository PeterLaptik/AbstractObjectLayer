#ifndef ABSTRACT_OPERATION_H
#define ABSTRACT_OPERATION_H

#include <vector>

namespace cad
{
	namespace modeller
	{
		namespace operations
		{
			template<typename T>
			class AbstractOperation
			{
				public:
					void CreateObject(std::vector<T> &objects) = 0;
			};
		}
	}
}

#endif
