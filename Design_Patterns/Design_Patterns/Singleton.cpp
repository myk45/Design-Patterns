#include "Singleton.h"
#include "CommonIncludes.h"

//////////////////////////////////////////
Singleton* Singleton::m_Instance = NULL;
//////////////////////////////////////////


Singleton* Singleton::getInstance()
{
	if (!m_Instance) {
		std::cout << std::endl << "Instance getting created" << std::endl;
		m_Instance = new Singleton();
		return m_Instance;
	} else {
		std::cout << std::endl << "Instance alreadly created. Returning that instance." << std::endl;
		return m_Instance;
	}
}

void Singleton::printMessage()
{
	std::cout << std::endl << "Singleton: Printing message." << std::endl;
}

Singleton::Singleton()
{
}