#include <iostream>
#include "PrintVisitor.h"


PrintVisitor::PrintVisitor()
{

}

PrintVisitor::~PrintVisitor()
{

}

void PrintVisitor::visit( Directory* dir )
{
   std::cout << "\nVisited! Doing stuff with the directory!";
}
