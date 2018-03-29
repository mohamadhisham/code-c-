#include <iostream>

using namespace std;

int main()
{
    int fahrenheit;
    int celsius;
    for(int celsius =100;celsius >=0;celsius--)
    {
        fahrenheit=((9/5)*celsius)+32;
        cout <<"fahrenheit = "<<fahrenheit <<endl;
    }
    return 0;

}

