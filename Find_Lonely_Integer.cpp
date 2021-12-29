#include <vector>
#include <string>
#include <iostream>

/*Removes non-lonely integers. If the first integer is
found to be lonely all over integers are immediately removed*/
static void removeNonLonelyInt(std::vector<int> &a)
{
    bool firstIntLonely = true;

    for (int i = 1; i < a.size(); i++)
    {
        if (a[0] == a[i])
        {
            firstIntLonely = false;
            a.erase(a.begin() + i);
            a.erase(a.begin());
            break;
        }
    }

    if (firstIntLonely)
    {
        a = std::vector<int>{ a[0] };
    }
}

int lonelyinteger(std::vector<int> &a) {
    //Remove non-lonely integers until only a single int remains
    while (a.size() > 1)
    {
        removeNonLonelyInt(a);
    }
    return a[0];
}

void main()
{
    std::vector<int> a{ 0, 2, 0, 1 ,1 };
    int b=lonelyinteger(a);
   std::cout << std::to_string(b);
}