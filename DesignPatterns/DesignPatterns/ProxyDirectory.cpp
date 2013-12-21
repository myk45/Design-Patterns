#include <cassert>
#include "ProxyDirectory.h"

ProxyDirectory::ProxyDirectory( /*const*/ Directory* dir )
{
   _directoryInstance = dir;
}

ProxyDirectory::~ProxyDirectory()
{
   delete _directoryInstance;
}

bool ProxyDirectory::addContact( const Contact& contact )
{
   LOGGER
   return _directoryInstance->addContact( contact );
}

void ProxyDirectory::searchContact( const Name& name, std::vector< Contact >& cList )
{
   LOGGER
   _directoryInstance->searchContact( name, cList );
}

void ProxyDirectory::displayContacts() const
{
   LOGGER
   _directoryInstance->displayContacts();
}

void ProxyDirectory::accept( IVisitor* visitor )
{
   assert( 0 );
}
