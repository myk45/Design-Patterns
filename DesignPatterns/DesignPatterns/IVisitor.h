#pragma once

class Directory;


// A simple visitor class.
class IVisitor {
public:
   virtual void visit( Directory* dir ) = 0;
};