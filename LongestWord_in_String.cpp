#include<iostream>
#include<climits>
 using namespace std;

 int main()

 {
    
    int n;

    cin >> n;
    cin.ignore();

    char word[n+1];

    cin.getline(word,n);
    cin.ignore();


    int i = 0;
    int count = 0;
    int maxm = 0;
    int st = 0;
    int maxst = 0;

    while (1)
    {
       if (word[i] == '\0' || word[i] == ' ')
       {
           if (count > maxm)
           {
               maxm = count;
               maxst = i-1;
           }
           
           count = 0;
       }
       else
       {
       count++;
       }

       if (word[i]=='\0')
       {
           break;
       }

       i++;  

    }

    cout << maxm << endl;

    for (int i = maxst - maxm + 1; i <= maxst; i++)
    {
        cout << word[i];
    }
    
    


 }