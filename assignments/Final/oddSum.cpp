#include <iostream>
using namespace std;

int main()
{
    int sum{0};
    int count{0};

    for (unsigned int count = 1; count <= 99; count += 2)
    {
        sum += count;
    }
    cout << "The sum of all odd integers between 1-99 is " <<
    sum << " \n" << endl;
return 0;
}
