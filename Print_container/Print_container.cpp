#include <iostream>
#include <vector>
#include <set>
#include <list>

template <typename ITR>
void print_container(ITR b, ITR e) {
    auto itr = b;
    while (itr != e) {
        std::cout << *itr << " ";
        itr++;
    }
    std::cout << std::endl;
}

int main()
{
    
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    std::list<std::string> test_list = { "one", "two", "three", "four" };
    std::vector<std::string> test_vector = { "one", "two", "three", "four" };

    print_container(test_set.begin(), test_set.end());
    print_container(test_list.begin(), test_list.end());
    print_container(test_vector.begin(), test_vector.end());

    return 0;
}