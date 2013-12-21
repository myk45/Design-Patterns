#include <iostream>
#include "Name.h"
#include "DirectoryFactory.h"
#include "PrintVisitor.h"


void displayOptions()
{
   std::cout << "\n\n\n\n";
   std::cout << "\n1: Add contact \n2: View contact\n3: Search Contact \n4: Visitor example\nq: Exit";
   std::cout << "\n\nEnter option";
}


void showFoundList( const std::vector< Contact >& cList )
{
   std::cout << "\n======     Search details       ========\n";
   std::cout << "\n========================================\n";
   for ( unsigned int i = 0; i < cList.size(); i++ ) {
      cList[i].display();
   }
   std::cout << "\n========================================\n";
}

int main()
{
   IDirectory* newDir = DirectoryFactory::getDirectory( 2 );

   char c;

   std::string nameF, nameL, phone;
   while ( 1 ) {
      displayOptions();
      
      std::cin >> c;
      switch ( c ) {
         case '1':
         {
            std::cout << "\nEnter first name, last name";
            std::cin  >> nameF;
            std::cin  >> nameL;

            Name name1( nameF, nameL );

            char isPhone;
            std::cout << "\nDo you have a phone number?<y/n>";
            std::cin >> isPhone;

            if ( isPhone == 'y' ) {
               std::string stdCode, isd, num;
               
               std::cout << "Enter phone <isd><std><num>";
               std::cin >> isd >> stdCode >> num;

               Phone ph( isd, stdCode, num );
               Contact c( name1, ph );
               
               newDir->addContact( c );
            } else {
               Contact c( name1 );
               newDir->addContact( c );
            }
            break;
         }
         case '2':
         {
            newDir->displayContacts();
            break;
         }
         case '3':
         {
            std::string nameF, nameL;
            std::cout << "\nEnter first name, last name";
            std::cin  >> nameF;
            std::cin  >> nameL;
            
            std::vector< Contact > cList;
            Name name( nameF, nameL );
            newDir->searchContact( name, cList );
            
            showFoundList( cList );
            break;
         }
         case '4':
         {
            PrintVisitor pv;
            newDir->accept( &pv );
            break;
         }
         case 'q':
         {
            exit( 0 );
         }
      }
   }
}