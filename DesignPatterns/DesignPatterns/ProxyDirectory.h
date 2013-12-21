#pragma once

#include "IDirectory.h"
#include "Directory.h"

#define LOGGER std::cout << "\n============\nInside " << __FUNCTION__ << "\n============\n";

class ProxyDirectory : public IDirectory {
public:
   ProxyDirectory( /*const*/ Directory* dir );
   ~ProxyDirectory();

   bool addContact( const Contact& contact );
   virtual void searchContact( const Name& name, std::vector< Contact >& cList );
   void displayContacts() const;

   void accept( IVisitor* visitor );

private:
   Directory* _directoryInstance;
};