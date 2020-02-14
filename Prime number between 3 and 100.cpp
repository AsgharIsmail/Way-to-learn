#include <iostream>
using namespace std;
int main()
{
    int first_Number =3, Second_Number=100, i, flag;
    
    cout << "Prime numbers between 3 and 100 are: ";
    while (first_Number< Second_Number)
    {
        flag = 0;
        for(i = 2; i <= first_Number/2; ++i)
        {
            if(first_Number % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << first_Number << " ";
        ++first_Number;
    }
    return 0;
}
