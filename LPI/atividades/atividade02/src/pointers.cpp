#include <iostream>

int main(int argc, char* argv[])
{
    int* n1 = new int[3];
    n1[0] = 1;
    n1[1] = 2;
    n1[2] = 3;

    int* n2 = new int[3];

    for (size_t i = 0; i < 3; i++) {
        n2[i] = n1[i];
    }
    delete[] n1;
    //delete[] n2;
    //n1 = n2;
    /* std::cout << n1[1] << std::endl; */
    std::cout << n2[1] << std::endl; 

    return 0;
}
