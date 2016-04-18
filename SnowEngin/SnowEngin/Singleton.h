#ifndef _SINGLETON_H
#define _SINGLETON_H

#include "Define.h"

template<typename T>
class tSingleton
{
private:
	struct SingletonCreator
	{
		SingletonCreator() {}
		inline void init() {}
	};

	static SingletonCreator m_Creator;

	tSingleton();

public:

	static T* instance()
	{
		// need lock
		static T m_instance;
		m_Creator.init();
		return &m_instance;
	}
};


template<typename T>
typename tSingleton<T>::SingletonCreator tSingleton<T>::m_Creator;



#endif