#include <iostream>

int main()
{
    int* pData = new int;

    int* pnData = new int(10);

    *pData = 5;

    std::cout << *pData << std::endl;
    std::cout << *pnData << std::endl;

    delete pData;
    delete pnData;

    int* arr = new int[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << std::endl;
    }

    delete[] arr;

    return 0;
}
