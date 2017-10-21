#include <iostream>
#include <StringAlgorithm.hpp>


using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
//    string *str = StringAlgorithm::ReverseWord("hello world");
    string str = "hello world c++";
    StringAlgorithm::ReverseString(&str, str.size(), 0);
    cout << str<<endl;
    StringAlgorithm::ReverseWord(&str);
    cout<<str<<endl;

    return 0;
}