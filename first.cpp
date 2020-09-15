#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int isPal(string val)
{
int len;
len=val.size();
int j=len-1,i=0,k;

    while(i<j){
        if (tolower(val[i++]) == tolower(val[j--]))
        {
             k=1;
            continue;
        }
        else{
            k=0;
            break;
        }
    }
    
    if (k==1) {
        return 1;
        }
    else{
        return 0;
    }
    return 0;
}

int main()
{
    string str;
    cout<<"Enter a word to verify whether it is a palindrome or not\n";
    getline(cin,str);
    if (isPal(str)) {
        cout<<"The entered string is palindrome!";
    }
    else
    {
        cout<<"The entered string is not palindrome!";
    }    
}
