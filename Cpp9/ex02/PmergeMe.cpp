/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:56 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/06 11:58:07 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "Vector.hpp"
#include "Deque.hpp"
#include <sstream>
#include <iomanip>
# include <sys/time.h>

int CheckDigit(const std::string& str)
{
	for(int i = 0; i < (int)str.size(); i++) {
		if (!std::isdigit(str[i]) && (i || (!i && str[i] != '-' && str[i] != '+')))
			return (0);
    }
	return(1);	
}

void parsing(std::vector<int>& array, char **av, int ac)
{
    int tmp;
    std::vector<std::string> args(av, av + ac -1);
    std::stringstream handler;
        
    for (std::vector<std::string>::iterator it = args.begin(); it != args.end(); it++) {
        handler << *it;
        if (!CheckDigit(*it))
            throw std::runtime_error("Error: the argument should contain only digits");
        handler >> tmp;
        if (handler.fail())
            throw std::runtime_error("Error: overflow");
        if (tmp < 0)
            throw std::runtime_error("Error: negative number");
        array.push_back(tmp);
        handler.clear();
    }
}

void parsing(std::deque<int>& array, char **av, int ac)
{
    int tmp;
    std::deque<std::string> args(av, av + ac -1);
    std::stringstream handler;

        
    for (std::deque<std::string>::iterator it = args.begin(); it != args.end(); it++) {
        handler << *it;
        if (!CheckDigit(*it))
            throw std::runtime_error("Error: the argument should contain only digits");
        handler >> tmp;
        if (handler.fail())
            throw std::runtime_error("Error: overflow");
        if (tmp < 0)
            throw std::runtime_error("Error: negative number");
        array.push_back(tmp);
        handler.clear();
    }
}


long long	timeofday(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return (((time.tv_sec * 1000000) + (time.tv_usec)));
}
// #include <unistd.h> 
// void	ft_usleep(long long time)
// {
// 	long long	t_tosleep;

// 	t_tosleep = timeofday() + time;
// 	while (timeofday() < t_tosleep)
// 		usleep(200);
// }
void PmergeMe(char **av, int ac) //check if is sorted
{
    std::vector<int>  array;
    std::deque<int>  array1;
    long long startTime, endTime, timeVector, timeDeque;

    startTime = timeofday();
    parsing(array, av, ac);
    Vector vector(array);
    vector.sort();
    endTime = timeofday();
    timeVector = endTime - startTime;

    startTime = timeofday();
    parsing(array1, av, ac);
    Deque deque(array1);
    deque.sort();
    // ft_usleep(1000000);
    // insertionSort(array, ac-1);
    // std::sort(array.begin(), array.end());
    endTime = timeofday();
    timeDeque = endTime - startTime;
    vector.print();
    // printf("uslep = %lf\n", timeDeque);
    // deque.print();
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << ac -1 << " elements with std::vector " << timeVector << " us  " 
                << static_cast<double>(timeVector) / 1000000 << " s" << std::endl;
    std::cout << "Time to process a range of " << ac -1 << " elements with std::deque  " << timeDeque << " us  " 
                << static_cast<double>(timeDeque )/ 1000000 << " s" << std::endl;   
}