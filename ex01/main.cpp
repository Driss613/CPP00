#include "phonebook.hpp"
#include "contact.hpp"

int main ()
{
    Phonebook test;

    test.help();
    test.add();
    test.print_contacts_header();
    test.print_contacts();
    test.print_contact();
}