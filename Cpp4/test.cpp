#include <iomanip>
#include <iostream>

void f()
{
    system("leaks a.out");
}

int main(int argc, char const *argv[])
{
    // int *i = new int[4];
    int *i = nullptr;
    delete[] i;
        atexit (f);

    
}
