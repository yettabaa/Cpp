/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:50:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/07/29 04:53:46 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

class PhoneBook
{
public:
    std::string field[5];
    std::string info[5];
    std::string tmp[5];
    PhoneBook()
    {
        field[0] = "first name";
        field[1] = "last name";
        field[2] = "nickname";
        field[3] = "phone number";
        field[4] = "darkest secret";
    }
};

class Contact
{  
private:
    int i, j, indx, ctrd;
    std::string hold;
    // const char *str;
    PhoneBook book[8];// it can be private
public:    
    Contact() {indx = 0; i = -1; j = -1;}
    
    void _add()
    {
        // printf("%d\n", indx);
        ctrd = 1;
        i = -1;
        while (++i < 5 && ctrd)
        {
            std::cout << book[indx].field[i] << ": ";
            book[indx].tmp[i] = _check(ctrd);
            
            // (book[indx].tmp[i].empty()) && (ctrd = 0);
        }
        i = -1;
        while (++i < 5 && ctrd)
        {
            if (book[indx].tmp[i].empty()) // you can stpecife wch tmp neded
            {
                j = -1;
                std::cout << std::endl;  
                std::cout << "Contact not saved !" << std::endl;
                std::cout << "phone only number"; // put flag in _check
                std::cout << "You forgot: ";
                while (++j < 5)
                    (book[indx].tmp[j].empty()) && std::cout  << "{" << book[indx].field[j] << "} ";
                std::cout << ".\n" <<std::endl;  
                j = -1;
                while (++j < 5)
                    book[indx].tmp[j] = "";
                return;
            }
        }
        (!ctrd) && std::cout << std::endl;    
        i = -1;
        while (++i < 5 && ctrd)
            book[indx].info[i] = book[indx].tmp[i];
        indx = (indx +1) %3; // change to 8
    }
    
    void _display()
    {
        if (book[0].info[0].empty())
        {
            std::cout << "You have't any contact yet !" << std::endl;
            return;
        }
        j = -1;
        while (++j < 3) // change to 8
        {
            i = -1;
            (!book[j].info[0].empty()) && std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << std::endl;
            (!book[j].info[0].empty()) && std::cout << "|" << std::setw(10) << j + 1 ;
            while (++i < 3)
            {
                (!book[j].info[i].empty()) && std::cout << "|" << std::setw(10)  << book[j].info[i].substr(0,9) ;
                (book[j].info[i].length() > 9) && std::cout << ".";
            }
            (!book[j].info[0].empty()) && std::cout << "|"<<std::endl;    
        }
        std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << std::endl;
        _search();
    }
    
    void _search(void)
    {
        std::cout << "Enter the index: ";
        std::getline(std::cin, hold);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            return;
        }
        hold = trim(hold, " \t");
        i = atoi(hold.c_str());
        
        if (i < 1 || i > 8 || hold.length() > 1)
        {
            std::cout << "error\n" ;
            return ;
        }
        j = -1;
            // printf("i = %d\n", i);//
        while (++j < 5)
            (!book[i - 1].field[0].empty()) && std::cout << book[i - 1].field[j] << ": " <<book[i - 1].info[j] << std::endl;
    }
};

int main()
{
    std::string str;
    Contact add;
    
    while(std::getline(std::cin, str) && str != "EXIT") // understund
    {
        if (str == "ADD")
            add._add();
        else if(str == "s")// chenge name
            add._display();    
    }
}
