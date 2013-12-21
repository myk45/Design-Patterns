#pragma once

#include "IVisitor.h"

class PrintVisitor : public IVisitor {
public:
   PrintVisitor();
   ~PrintVisitor();

   virtual void visit( Directory* dir );
};