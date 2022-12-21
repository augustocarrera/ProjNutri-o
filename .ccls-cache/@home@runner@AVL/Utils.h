// Utils.h
/*
  Augusto Esteves Carrera - 32114842
  Gustavo Fernandes Costa - 32161093
  Mateus Yoon - 32159609
*/
#ifndef __UTILS_H__
#define __UTILS_H__

namespace Utils
{
	template <typename T>
	static T Max(T l, T r)
	{
		return (l > r) ? l : r;
	}
}

#endif