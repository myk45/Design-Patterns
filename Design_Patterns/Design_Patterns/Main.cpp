#include "CommonIncludes.h"
#include "Singleton.h"


void singletonDemo()
{
	// Notice below that the same instance is returned for p_Instance1 and p_Instance2
	Singleton *p_Instance1 = Singleton::getInstance();
	Singleton *p_Instance2 = Singleton::getInstance()->getInstance();
	Singleton::getInstance()->printMessage();
}

int main(void)
{
	singletonDemo();
	
	getchar();
	return 0;
}