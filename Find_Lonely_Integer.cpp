#include <vector>
#include <string>
#include <iostream>

int lonelyinteger(std::vector<int> &a) {
    if (a.size() == 1)
    {
        return a[0];
    }
    else {
        {
            int sizeOfA = a.size();
            for (int i = 0; i < sizeOfA; i++)
            {
                if (a[0] == a[i])
                {
                    a.erase(a.begin() + i);
                    a.erase(a.begin());
                    break;
                }
            }
            lonelyinteger(a);
            /*
            if (a.size() == sizeOfA)
            {
                return a[0];
            }
            */
        }
    }
}

void main()
{
    std::vector<int> a{ 2,0, 0, 1 ,1 };
    int b=lonelyinteger(a);
   std::cout << std::to_string(b);
}