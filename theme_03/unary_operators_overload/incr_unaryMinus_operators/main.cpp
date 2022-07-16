#include <iostream>
#include "Date.cpp"
using namespace std;

main()
{
    Date d1(12, 27, 2010);
    Date d2;

    cout << "d1 is " << d1 << "\nd2 is " << d2;
    cout << "\n\nd1 += 7 is " << (d1 += 7);

    Date d3(7,13,2010);

    cout << "\n\nTesting the prefix increment operator:\n"
         << " d3 is " << d3 << endl;
    cout << "++d3 is " << ++d3 << endl;
    cout << " d3 is " << d3;
    cout << "\n\nTesting the postfix increment operator:\n"
         << " d3 is " << d3 << endl;
    cout << "d3++ is " << d3++ << endl;
    cout << " d3 is " << d3 << endl;
    cout << "\n\nTesting the prefix unary minus:\n"
         << " d3 is " << d3 << endl;
    cout << "-d3 is " << -d3 << endl;
    cout << " d3 is " << d3 << endl;
    return 0;
}