#include <iostream>

int main()
{
    int a = 10;

    int b(a);

// 초기값의 형식에 맞춰 선언하는 인스턴스의 형식이 '자동'으로 결정
    auto c(b);

    std::cout << a + b + c << std::endl;

    return 0;
}
