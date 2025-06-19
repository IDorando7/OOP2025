#include "TextAnalyzer.h"

TextAnalyzer::TextAnalyzer(const string& filename)
{
	ifstream fin(filename);
	string cuvant;
	string sentence;
	while (fin >> cuvant)
	{
		for (char w : cuvant)
			if (w != '.')
				frecventa_char[tolower(w)]++;
		sentence += cuvant;
		sentence += " ";
		if (cuvant.back() == '.')
		{
			sentences.push_back(sentence);
			sentence = "";
		}

		if (cuvant.back() == '.')
			cuvant.pop_back();
		frecventa_cuvant[cuvant]++;
		if (frecventa_cuvant[cuvant] == 1)
			cuvinte_unice.push_back(cuvant);
	}

}

int TextAnalyzer::sentences_count()
{
	return sentences.size();
}

int TextAnalyzer::words_count()
{
	return frecventa_cuvant.size();
}

string TextAnalyzer::sentence(int index)
{
	if (index < 0 or index >= sentences_count()) 
	{
		throw out_of_range("Invalid index for sentence !");
	}
	return sentences[index];
}

pair<string, int> TextAnalyzer::word(int index) 
{
	if (index < 0 or index >= words_count()) 
	{
		throw out_of_range("Invalid index for word !");
	}
	return make_pair( cuvinte_unice[index], frecventa_cuvant[cuvinte_unice[index]] );
	//return { cuvinte_unice[index], frecventa_cuvant[cuvinte_unice[index]] };
}

int TextAnalyzer::frequancy(char ch) 
{
	return frecventa_char[ch];
}
