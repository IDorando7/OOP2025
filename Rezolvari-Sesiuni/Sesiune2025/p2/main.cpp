#include "TextAnalyzer.h"

int main()
{
    try {
        TextAnalyzer t("phrase.txt");
        std::cout << "Sentences: " << t.sentences_count() << std::endl;
        for (int tr = 0; tr < t.sentences_count(); tr++) {
            std::cout << " * " << t.sentence(tr) << std::endl;
        }
        
        std::cout << "Words : " << t.words_count() << std::endl;
        for (int tr = 0; tr < t.words_count(); tr++) {
            auto [w, f] = t.word(tr);
            std::cout << " * " << w << " -> frequancy: " << f << std::endl;
        }
        for (auto ch = 'a'; ch <= 'z'; ch++) {
            if (t.frequancy(ch) > 0)
                std::cout << ch << "=" << t.frequancy(ch) << ", ";
        }
        std::cout << std::endl;
        try {
            auto s = t.sentence(100);
        }
        catch (std::exception e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
        try {
            auto w = t.word(100);
        }
        catch (std::exception e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
    catch (std::exception e) {
        std::cout << "Fail to open file !";
    }
}
