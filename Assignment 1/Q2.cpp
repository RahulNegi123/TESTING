#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100];
    int i, length,flag=0;
    cout<<"Enter String : \n";
    cin>>str;
    length = strlen(str);
    for(i=0;i < length ;i++)
    {
        if(str[i] != str[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        cout<<str<<" is not a palindrom\n";
    else
        cout<<str<<" is a palindrome\n";
    return 0;
}
