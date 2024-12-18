#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string vowels = "AEIOUYaeiouy";
string consonants = "BCDFGHJKLMNPRSTVWXZbcdfghjklmnprstvwxz";

bool isPalindrom(string s)
{
    int n = s.length();
    if (n <= 2) return false;

    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - i - 1]) return false;
    return true;
}

bool haveAnyPalindrom(string * words, int n)
{
    for (int i = 0; i < n; i++)
        if (isPalindrom(words[i])) return true;
    return false;
}

int countVowels(string s)
{
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
        if (vowels.find(s[i]) != string::npos) cnt++;
    return cnt;
}

void dupclicateConsonants(string &s)
{
    for (int i = 0; i < s.length(); )
    {
        if (consonants.find(s[i]) != string::npos)
        {
            s.insert(i + 1, 1, s[i]);
            i += 2;
        }
        else
            i += 1;
    }
}

void deleteVowels(string &s)
{
    for (int i = 0; i < s.length(); )
    {
        if (vowels.find(s[i]) != string::npos)
            s.erase(i, 1);
        else
            i += 1;
    }
}

void sortByNumOfVowels(string * words, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (countVowels(words[i]) < countVowels(words[j]))
                swap(words[i], words[j]);
        }
    }
}

void sortByAlphabet(string * words, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (words[i] > words[j])
                swap(words[i], words[j]);
        }
    }
}

int main()
{
    const int N_MAX = 5000;
    string words[N_MAX];
    int k = 3;

    ifstream fin("input.txt");
    while (!fin.eof())
    {
        fin >> words[k++];
    }
    fin.close();

    if (haveAnyPalindrom(words, k))
        cout << "YES" << endl;
    else
    {
        for (int i = 0; i < k; i++)
        {
            deleteVowels(words[i]);
            dupclicateConsonants(words[i]);
        }
        sortByAlphabet(words, k);
    }

    for (int i = 0; i < k; i++)
        cout << words[i] << " ";

    return 0;
}
