#include <iostream>
#include <fstream>
#include <map>
#include <queue>
#include <string>

using namespace std;

ifstream fin("date.txt");

map<string, int> M;

struct cmp
{
    bool operator() (const string o, const string p)
    {
        if (M[o] == M[p])
            return o > p;
        return M[o] <= M[p];
    }
};

priority_queue <string, vector<string>, cmp> pq;

void ToLowerCase(string& sir)
{
    for (int i = 0; i < sir.size(); i++)
        if ('A' <= sir[i] and sir[i] <= 'Z')
            sir[i] = sir[i] - 'A' + 'a';
}

vector <string> SplitWords(string sir, string separators)
{
    vector <string> tokens;
    size_t start = 0, end;

    while (start < sir.size())
    {
        start = sir.find_first_not_of(separators, start);
        if (start == string::npos) break;

        end = sir.find_first_of(separators, start);
        tokens.push_back(sir.substr(start, end - start));

        start = end;
    }
    return tokens;
}

int main()
{
    string sir, separtors(" ,?!.");
    getline(fin, sir);
    ToLowerCase(sir);
    vector <string> v = SplitWords(sir, separtors);
    for (string w : v)
        M[w]++;

    for (auto w : M)
        pq.push(w.first);

    while (!pq.empty())
    {
        cout << pq.top() << " => " << M[pq.top()] << "\n";
        pq.pop();
    }

    return 0;
}