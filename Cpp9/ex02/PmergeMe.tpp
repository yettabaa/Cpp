/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettabaa <yettabaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:11:46 by yettabaa          #+#    #+#             */
/*   Updated: 2023/10/04 19:11:02 by yettabaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_TPP
#define PMERGEME_TPP

template <typename T, typename P> PmergeMe<T, P>::PmergeMe(const T& array) : array(array) {} 

template <typename T, typename P> PmergeMe<T, P>::~PmergeMe() {}

template <typename T, typename P> void PmergeMe<T, P>::createPairs(void)
{
    P pairs(array.size() /2);

    for (typename P::iterator it = pairs.begin(); it != pairs.end(); it++) {
        it->first = array[(it - pairs.begin()) *2];
        it->second = array[(it - pairs.begin()) *2 +1];
        if (it->first < it->second)
            std::swap(it->first , it->second);
        // std::cout << it->first << " " << it->second << " ";
    }
    // puts("");
    binaryInsertPairs<P>(pairs);
    // std::sort(pairs.begin(), pairs.end()); // forbiden
    for (typename P::iterator it = pairs.begin(); it != pairs.end(); it++) { //can be opti in jacob
        mainChain.push_back(it->first);
        insert.push_back(it->second);
        if (it == (pairs.end() -1) &&  array.size() % 2 != 0)
            insert.push_back(*--array.end());
        // std::cout << it->first << " " << it->second << " ";
    }
    // puts("");
    this->pairs = pairs;
}

template <typename T, typename P> void PmergeMe<T, P>::JacobsthalOrder(int n)
{
    // long c = 0;
    long jaco, j;// 2731; //1 3 5 11 21 43 85 171 341 683 1365 2731 5461 
    T jacobs;
    
    jacobs.push_back(1);
    jacobsthalOrder.push_back(1);
    for(int i = 2; i <= n; i++) {
        jaco = (std::pow(2, i) + std::pow(-1, i - 1)) / 3; // Jacobsthal formula
        (n > jaco) &&  (j = jaco);
        (n <= jaco) &&  (j = n);
        while (j > *--jacobs.end())
            jacobsthalOrder.push_back(j--);
        if (jaco >= n)
            break;
        jacobs.push_back(jaco);
    }
}

template <typename T, typename P> void PmergeMe<T, P>::sort(void)
{
    createPairs();
    JacobsthalOrder((int)pairs.size());
    size_t order, size = insert.size();

    for(size_t i = 0; i < size; i++) {
        (i < jacobsthalOrder.size()) ? order = jacobsthalOrder[i] - 1 : order = i;
        for (typename T::iterator it = mainChain.begin(); it != mainChain.end(); it++)
        {
            if (insert[order] <= *it || (i == size -1  && it == mainChain.end() - 1)) { // = in this comparison it minimis iteration (time complex) 50 nember 654 ==> 209
                
                // printf ("zpend = %d\n",  insert[order]);
                (i == size -1  && it == mainChain.end() - 1) ? mainChain.insert(++it, insert[order]) : mainChain.insert(it , insert[order]);
                break;
            }
        }
    }
}

template <typename T, typename P> void PmergeMe<T, P>::print(void)
{
    for (typename T::iterator it = mainChain.begin(); it != mainChain.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    // for (typename P::iterator it = mainChain.begin(); it != mainChain.end(); it++)
    //     std::cout << mainChain[i] << " ";
    
    
    
}

#endif