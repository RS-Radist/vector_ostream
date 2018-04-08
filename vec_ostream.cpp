#include <iostream>
#include <vector>
int main()
{
    
    std::vector<int> vec;
    vec.reserve(10);
    for (int i=0;i<vec.capacity();i++)
    {
        vec.push_back(arc4random()%10);
    }
    std::vector<int>::iterator beg=vec.begin();
    std::vector<int>::iterator end=vec.end();
    while (beg!=end)
    {
        std::cout<<*(beg++)<<" ";
    }
    std::cout<<std::endl;
    std::ostream_iterator<int> out(std::cout," ");
    std::copy( std::begin(vec), std::end(vec), out );
    // или std::copy(std::begin(vec), std::end(vec), std::ostream_iterator<int>(std::cout," "));
}
