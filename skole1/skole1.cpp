// skole1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<char> nameVec;
    
    const auto name = "Ali";
    constexpr char name1[] = "Ali";
    const char *name2 = "Ali";
    const string name3 = "Ali";
    static const char *name4 = "Ali";
    constexpr wchar_t name5[] = L"Ali";
    nameVec.resize(16);
    memcpy(nameVec.data(), name, 16);
    constexpr char age = 26;
    memcpy(&nameVec[15], &age, 1);
    const char name5[] = { (char)97,(char)108, (char)105 };
    std::cout <<"My name is: " << nameVec.data() << " I am: " << (int)nameVec[15] << " years old " << "Size of name vec: " << sizeof(nameVec) << endl;
    cout << "added commit" << endl;
}

