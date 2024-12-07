#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    string words[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> words[i];
    }

    if(words[0] == "vertebrado")
    {
        if(words[1] == "ave")
        {
            if(words[2] == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else
            {
                cout << "pomba" << endl;
            }
        }
        else
        {
            if(words[2] == "onivoro")
            {
                cout << "homem" << endl;
            }
            else
            {
                cout << "vaca" << endl;
            }
        }
    }
    else
    {
        if(words[1] == "inseto")
        {
            if(words[2] == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else
            {
                cout << "lagarta" << endl;
            }
        }
        else
        {
            if(words[2] == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}