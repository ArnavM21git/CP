
#include <iostream>
#include <vector>
#include<list>


void pair()
{
    std::pair<int,int> a= {1,34};
}
int main()
{
//     int n;
//     std::cin>>n;
//     int a[n];//constANT VALUE
    std::pair<int,int> a={1,2};
    std::vector<int> arr={8,9};
    std::list<int> l;
    l.emplace_front(12);
    std::cout<<arr[0];
    
    // std::cout<<arr<<std::endl;
}