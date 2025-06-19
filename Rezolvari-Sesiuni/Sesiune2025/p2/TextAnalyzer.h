#pragma once
#include <bits/stdc++.h>
using namespace std;

class TextAnalyzer
{
private:
    vector<string> sentences;
    map<string, int> frecventa_cuvant;
    map<char, int> frecventa_char;
    vector<string> cuvinte_unice;

public:

    TextAnalyzer(const string& filename);
    int sentences_count();
    int words_count();
    string sentence(int index);
    pair<string, int> word(int index);
    int frequancy(char ch);
};