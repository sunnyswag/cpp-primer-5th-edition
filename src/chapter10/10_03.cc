#include <iostream>
#include <vector>
#include <numeric>

using std::cout; using std::endl; using std::vector; using std::accumulate;

int main()
{
    vector<int> v{1, 4, 5, 6, 10};
    cout << accumulate(v.cbegin(), v.cend(), 0) << endl;

    return 0;
}