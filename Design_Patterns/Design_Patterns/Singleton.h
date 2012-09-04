#ifndef _SINGLETON_
#define _SINGLETON_

/***
 *	This is is singleton class. This approach lets you create a single instance of a class that you can use
 *	anywhere through the lifetime of the application. This approach lets you get rid of global variables.
 *	The main idea in this "Creational Pattern" is that your class should create just one instance.
 *  Any further instance should be prohibited. For this, you could have something like this:

	class Samp {
		public:
				Samp() 
				{
					if (!m_Singleton) {
						m_Singleton =  new A();						
					} 
				}
		private:				
				static Samp* m_Singleton;
	};

 *	However, this leads to recursive call of the constructor. So, we have a getter for the class. Also, in order
 *	to make sure there is no attempt of creating the class' instance outside, we make the construcor private.
 *	So, the implementation would be as follows:
*/

class Singleton {
	private:
			Singleton();				  // Note that the constructor is private.
			static Singleton *m_Instance; // Sole instance of the class.
	public:	
			static Singleton* getInstance();  // The instance getter of the class.
			void printMessage();		  
};

#endif