#include<iostream>
 using namespace std;

 int main()
 {
    char word[100];

    cout<<"Enter word: "<<endl;

    cin >> word;

    int len = 0, i = 0;

    while (word[i]!='\0')
    {
        i++;
    }

    len = i;
    i = 0;

    bool flag = true;

    while (i<=(len/2))
    {
        cout <<word[i]<<" "<<word[len-i-1]<<endl;
        if (word[i] != word[len-i-1])
        {
            flag = false;
            break;
        }
        i++;
        
    }
    
    if (flag == true)
    {
    cout <<"This word is palindrome"<<endl;
    }
    
    else
    {
       cout <<"This word is not a palindrome"<<endl; 
    }

    


 }