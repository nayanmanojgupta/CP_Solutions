#include <bits/stdc++.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
using namespace std;

string s;

void count_vowel()
{
    int cnt = 0;
    for (auto x : s)
    {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        {
            cnt++;
        }
    }
    cout << "vowels= " << cnt << endl;
}

void count_words()
{
    int cnt = 1;
    for (auto x : s)
    {
        if (x == ' ')
        {
            cnt++;
        }
    }
    cout << "WORDS= " << cnt << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cout << "Enter the string: ";
    getline(cin, s);
    int pid = fork();

    if (pid == 0)
    {
        cout << "child Executed: ";

        cout << "\n processid: " << getpid() << "parent: " << getppid() << endl;
        count_words();
        cout << endl;
    }

    else
    {
        cout << "parent Executed: ";
        sleep(10);
        cout << "\n processid: " << getpid() << "parent: " << getppid() << endl;
        count_vowel();
        cout << endl;
    }

    return 0;
}