#include <iostream>
using namespace std;
int main()
{
    int limit1,limit2,i,flag;
    cout << "Enter two whole numbers between which you have to find prime numbers:\n";
    cin >> limit1 >> limit2;
    cout << "Prime numbers between " << limit1 << " and " << limit2 << " are: ";
    while (limit1 < limit2)
    {
        flag = 0;
        for(i = 2; i <= limit1/2; ++i)
        {
            if(limit1 % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0 && limit1!=0 && limit1!=1)
            cout << limit1 << " ";
        ++limit1;
    }
    return 0;
}
