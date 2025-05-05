#include <iostream>
#include <string>
using namespace std;
static int s_level=1;
static int s_speed =2;
int main()
{
    if(s_level >5)
        s_speed =10;
    else
        s_speed =5;
    s_speed =s_level >5 ?10:5;
    std::string rank =s_level >10? "Varshi":"Gowda";
    std::string otherRank;
    if(s_level >10)
        otherRank = "Varshi";
    else
        otherRank = "Gowda";

    cout << "Hello World!" << endl;
    return 0;
}
