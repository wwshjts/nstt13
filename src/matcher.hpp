#include <cstddef> // size_t
#include <utility> // forward
#include <iostream>

template<typename Last>
int sum(Last last) {
    if (last == true) {
        return 0;
    } else {
        return 1;
    }
}

template<typename Head, typename... Tail> 
int sum(Head head, Tail ... tail) {
    if (head == true) {
        return 0;
    } else {
        return 1 + sum(tail...);
    }
}

template<typename Checker, typename... Args>
int getIndexOfFirstMatch(Checker check, Args... args) {
    return sum((check(std::forward<Args>(args)))...);
}
