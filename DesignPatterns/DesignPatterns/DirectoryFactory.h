#pragma once

#include "IDirectory.h"
#include "ProxyDirectory.h"
#include "Directory.h"

class DirectoryFactory {
public:
   static IDirectory* getDirectory( int option )
   {
      if ( option == 1 ) {
         return new Directory;
      } else {
         return new ProxyDirectory( new Directory );
      }
      
   }
};