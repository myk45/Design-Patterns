#pragma once


#include <vector>
#include "Contact.h"
#include "IVisitor.h"
#include "IDirectory.h"


class Directory : public IDirectory {
public:
   Directory();
   ~Directory();

   bool addContact( const Contact& contact );
   virtual void searchContact( const Name& name, std::vector< Contact >& cList );
   void displayContacts() const;

   void accept( IVisitor* visitor );

private:
   std::vector< Contact > _contactList;
};