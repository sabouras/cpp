#include <iostream>

class PhoneBook
{
    public:
        void show_list (void);
        void show_contact(int index);
        void add_contact(int index);
    
    private:
        int index;
        std::string Fname;
        std::string Lname;
        std::string Nname;
        std::string Pnumber;
        std::string Dsecret;
};

void PhoneBook::add_contact(int index)
{
    std::cout << "enter the first name";
    std::getline(std::cin, Fname);
    std::cout << "enter the last name";
    std::getline(std::cin, Lname);
    std::cout << "enter the nick name";
    std::getline(std::cin, Nname);
    std::cout << "enter the phone number";
    std::getline(std::cin, Pnumber);
    std::cout << "what's your darkest secret";
    std::getline(std::cin, Dsecret);
}

int main(void)
{
    std::string command;
    PhoneBook page[8];
    int idx;

    while (std::getline(std::cin, command))
    {
        if (command.compare("add") == 0)
            exit(0);
        else if(command.compare("add") == 0)
        {
            idx = idx % 8;
            page[idx].input_contact(idx);
            idx++;
        }
        else if (command.compare("search") == 0)
        {
            show_preview(page);
            select_index(page);
        }
    }
}