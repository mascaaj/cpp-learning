#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.142;
    cout << "PI value :" << PI << endl;

    enum
    {RED=1, YELLOW, BLACK, GREEN, BLUE, PURPLE};
    cout << "shot a red worth       :" << RED << endl;
    cout << "then shot a blue worth :" << BLUE << endl;
    cout << "then shot a black worth:" << BLACK << endl;
    cout << "shooting total         :" << RED + BLUE + BLACK << endl;

    typedef enum {NEGATIVE, POSITIVE} charge;
    charge neutral = NEGATIVE, live = POSITIVE;
    cout << "neutral charge         :" << neutral << endl;
    cout << "live charge            :" << live << endl;
    
}