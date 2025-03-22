#include <iostream>


#define PI 3.141592

#ifdef PI
    #define RADIUS n
#endif // PI

#ifndef AREA
    #define AREA ( PI * RADIUS * RADIUS)
#endif // AREA

using namespace std;

int main()
{
    int n;
    cout << "Radius? ";
    cin >> n;
    cout << "Dairenin alani: "<< AREA<<endl;

    return 0;

}
