#include <iostream>
#include "Directory.h"

Directory::Directory()
{

}

Directory::~Directory()
{

}

bool Directory::addContact( const Contact& contact )
{
   _contactList.push_back( contact );
   return true;
}


void Directory::searchContact( const Name& name, std::vector< Contact >& cList )
{
   if ( !_contactList.empty() ) {
      for ( unsigned int i = 0; i < _contactList.size(); i++ ) {
         if ( ( _contactList[i].getName().getFirstName() == name.getFirstName() )
            &&  _contactList[i].getName().getLastName()  == name.getLastName() 
            ) 
         {
            cList.push_back( _contactList[i] );
         }
      }
   } else {
      std::cout << "\nList empty!";
   }

}

void Directory::displayContacts() const
{
   if ( _contactList.empty() ) {
      std::cout << "\nContact list is empty! Whatever..F**k you!";
   } else {
      std::cout << "\n==============================================!";
      for ( unsigned int i = 0; i < _contactList.size(); i++ ) {
         _contactList[i].display();
      }
      std::cout << "\n==============================================!";
   }
}

void Directory::accept( IVisitor* visitor )
{
   visitor->visit( this );
}
