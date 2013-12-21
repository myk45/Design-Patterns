#pragma once

#include <vector>

#include "Name.h"
#include "Contact.h"
#include "Phone.h"
#include "IVisitor.h"

class IDirectory {
public:
   virtual bool addContact( const Contact& contact ) = 0;
   virtual void searchContact( const Name& name, std::vector< Contact >& cList ) = 0;
   virtual void displayContacts() const = 0;

   // Every visitor needs to be "accepted".
   virtual void accept( IVisitor* visitor ) = 0;
};
