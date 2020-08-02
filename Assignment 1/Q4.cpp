#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i, j, len,choice,code=5;
    char message[1000];
    cout<<"Enter the message to encrypt or decrypt using Caesar Cypher Algorithm:\n";
    cin.getline(message,1000);
    len = strlen(message);
    cout<<"Enter your choice \n 1. Decryption \n 2. Encryption \n";
    cin>>choice;
    if (choice==1)
    {
        char ch;
        for(i=0;message[i]!='\0';i++)
        {
            ch=message[i];
            if(ch>='a'&&ch<='z')
            {
                ch=ch-code;
                message[i]=ch;
            }
            else if(ch>='A'&&ch<='Z')
            {
                ch=ch-code;
                message[i]=ch;
            }
        }
        cout<<"Decrypted message is : "<<message;
    }
    else if (choice==2)
    {
        for(i=0;message[i]!='\0';i++)
        {
            char ch=message[i];
            if(ch>='a'&&ch<='z')
            {
                ch=ch+code;
                message[i]=ch;
            }
            else if(ch>='A'&&ch<='Z')
            {
                ch=ch+code;
                message[i]=ch;
            }
        }
        printf("Encrypted message is : %s",message);
    }
    return 0;
}
