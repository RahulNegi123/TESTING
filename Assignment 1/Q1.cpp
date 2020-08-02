#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
    int i;
    int len = 0;
    while(argv[++len] != NULL);
    int arrayTEMP[len];
    for(i=0;i<len-1;i++)
        arrayTEMP[i]=atoi(argv[i+1]);
    if(len==1)
    {
        cout<<"Please Enter valid number of arguments (i.e greater than 1)"<<"\n";
        int exit_code;
            exit( exit_code );
    }

    for(i=0;i<len-1;i++)
    {
        int temp = arrayTEMP[0];
        for(i=0; i<len-1; i++)
        {
            if(temp>arrayTEMP[i])
                temp=arrayTEMP[i];
        }
        cout<<"Smallest Number is : "<<temp;
    }
    return 0;
}

