#include <cstddef> // size_t
#include <utility> // forward
#include <iostream>

template<typename Checker, typename... Args>
int getIndexOfFirstMatch(Checker check, Args... args) {
    int cnt;
    auto l = [&cnt] (bool b) {  
        if (b == false) {
            cnt++;
            return true;
        } else {
            return false;            
        }
    };
    (1 && ... && l(check(std::forward<Args>(args))));
    return cnt;
}
