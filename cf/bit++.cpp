#include<iostream>
using namespace std;

int main()
{
    int n;
    std::cin >> n;
    int x = 0;
    while (n--)
    {
        std::string stat;
        std::cin >> stat;
        if (stat.find("++") != std::string::npos)
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    std::cout << x;
}