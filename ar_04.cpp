#include <iostream>

class Nec {
public:
    //...
    const int(&get_array() const)[10] 
    {
        return m_ar;
    }
private:
    int m_ar[10] = {0, 1, 2, 3, 4};
    //...
};


int main()
{
    Nec mynec;

    const auto& ar = mynec.get_array();

    for (const auto i : ar)
        std::cout << i << ' ';

    std::cout << '\n';
}
