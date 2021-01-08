#include<string>
#include <iostream>

using namespace std;

bool scramble(const std::string& s1, const std::string& s2){
    int charac = 0;
    char ch = 'a';
     int arr1[26];
     int arr2[26];

    for (int i = 0; i < 25; i++)
    {
        arr1[i] = 0;
        arr2[i] = 0;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < 25; j++)
        {
            charac = int(ch) + j;
            
            if (s1[i] == char(charac))
            {
                arr1[j] += 1;
            }
        }
    }

    for (int i = 0; i < s2.length(); i++)
    {
        for (int j = 0; j < 25; j++)
        {
            charac = int(ch) + j;
            
            if (s2[i] == char(charac))
            {
                arr2[j] += 1;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] >= arr2[i])
        {
            continue;
        }
        else
        {
            return false;
        }
        
    }
    return true;


}
