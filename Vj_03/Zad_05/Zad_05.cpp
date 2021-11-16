/*  5. Napisati funkciju koja broji koliko pojavljivanja danog podstringa ima u stringu
  koristeci funkcije standardne biblioteke. */

#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

void count_substr(string str1, string substring);

int main()
{

    string str1;
    string substr;

    cout << "Enter a string: ";
    getline(cin, str1);

    cout << "Enter the substring: ";
    getline(cin, substr);

    count_substr(str1, substr);
}


void count_substr(string str1, string substring)
{
    int cnt = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1.substr(i, substring.length()) == substring)
            cnt++;
    }

    if (cnt == 0)
        cout << "There are no occurances of \"" << substring << "\" in \"" << str1 << "\"\n";
    else
        cout << "Number of occurances of \"" << substring << "\" in \"" << str1 << "\" is: " << cnt << "\n";
}