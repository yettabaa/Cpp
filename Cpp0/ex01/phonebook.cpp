/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:50:17 by yettabaa          #+#    #+#             */
/*   Updated: 2023/07/28 05:47:58 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

class PhoneBook
{
public:
    std::string field[5];
    std::string info[5];
    // std::string first_name;
    // std::string last_name;
    // std::string nickname;
    // std::string phone;
    // std::string secret;
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
    int i, j, flag;
public:    
    
    int indx;
    // PhoneBook book[8];// it can be private
    PhoneBook book[8];// it can be private
    
    void _add()
    {
        // printf("%d\n", indx);
        flag = 1;
        i = -1;
        while (++i < 5 && flag)
        {
            std::cout << book[indx].field[i] << ": ";
            book[indx].info[i] = _check();
            (book[indx].info[i].empty()) && (flag = 0);
        }
        
        // std::cout << "first name: ";
        // book[indx].info[0] = _check();
        // (book[indx].info[0].empty()) && (flag = 0);
        
        // if (flag)
        // {
        //     std::cout << "last name: ";
        //     book[indx].info[1] = _check();
        // }
        // (book[indx].info[1].empty()) && (flag = 0);

        // if (flag)
        // {
        //     std::cout << "nickname: ";
        //     book[indx].info[2] = _check();
        // }
        // (book[indx].info[2].empty()) && (flag = 0);
        
        // if (flag)
        // {
        //     std::cout << "phone number: ";
        //     book[indx].info[3] = _check();
        // }
        // (book[indx].info[3].empty()) && (flag = 0);

        // if (flag)
        // {
        //     std::cout << "darkest secret: ";
        //     book[indx].info[4] = _check();
        // }
        // (book[indx].info[4].empty()) && (flag = 0);
        
        i = -1;
        while (++i < 5)
            if (book[indx].info[i].empty()) // you can stpecife wch info neded
            {
                j = -1;
                std::cout << "test" << std::endl;
                while (++j < 5)
                    book[indx].info[j] = "";
                break;
            }
            
        // std::getline(std::cin, book[indx].secret);
        
        indx = (indx +1) %8;
    }
    void _display()
    {
        j = -1;
        while (++j < 8)
        {
            i = -1;
            (!book[j].info[0].empty()) && std::cout << j + 1;
            while (++i < 3)
            {
                (!book[j].info[i].empty()) && std::cout << std::setw(10)  << "|" << book[j].info[i].substr(0,9);
                (book[j].info[i].length() > 9) && std::cout << ".";
            }
            (!book[j].info[0].empty()) && std::cout << std::endl;    
        }
        // _search();
        
    }
    // void _search(void)
    // {
        
    //     std::cout << "dekhel ind: ";
    //     std::cin >> i;
    //     std::cout << "first name: " << book[i].first_name << std::endl;
    // }
};

int main()
{
    std::string str;
    Contact add;
    
    add.indx = 0;
    while(std::getline(std::cin, str) && str != "EXIT") // understund
    {
        if (str == "ADD")
            add._add();
        else if(str == "s")// chenge name
            add._display();    
    }
    // std::cout << add.book[0].first_name << std::endl;
    // std::cout << add.book[1].first_name << std::endl;
    // std::cout << add.book[2].first_name << std::endl;
}
// int main()
// {
//     std::stringstream test;
//     std::string c;
//     std::string t;
//     Contact add;
//     add.indx = 0;
//     // PhoneBook book[8];

//     while(c != "EXIT") // understund
//     {
//         std::getline(std::cin, c);
//         if (c == "ADD")
//             add.add();

//     }
//     std::cout << add.book[0].first_name << std::endl;
//     std::cout << add.book[1].first_name << std::endl;

// }