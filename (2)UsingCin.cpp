#include <iostream>

int main()
{
    int nAge;
    std::cout << "나이를 입력하세요." << std::endl;
    std::cin >> nAge;

    char szJob[32];
    std::cout << "직업을 입력하세요." << std::endl;
    std::cin >> szJob;

    std::string strName;
    std::cout << "이름을 입력하세요." << std::endl;
    std::cin >> strName;

    std::cout << "당신의 이름은 " << strName << std::endl;
    std::cout << "당신의 나이는 " << nAge << std::endl;
    std::cout << "당신의 직업은 " << szJob << std::endl;

    return 0;
}
