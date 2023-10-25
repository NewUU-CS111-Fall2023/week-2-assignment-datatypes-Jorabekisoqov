//
// Created by computter on 25/10/2023.
//
#include <iostream>
#ifndef task_4
#define task_4
using namespace std;
#include <string>

class FindWordInSentence {
public:
    FindWordInSentence(const string& sentence, const string& word) :
            sentence_(sentence),
            word_(word) {}

    bool Find(size_t* index_out) {
        size_t found = sentence_.find(word_);
        if (found == std::string::npos) {
            return false;
        } else {
            *index_out = found;
            return true;
        }
    }

private:
    const string& sentence_;
    const string& word_;
};



int main() {
    string sentence , word;
    getline(cin,sentence);
    getline(cin,word);
    FindWordInSentence find(sentence, word);

    size_t index;
    bool found = find.Find(&index);

    if (found) {
        std::cout << "The word \""<<word<<"\"  matches the substring at index " << index << "." << std::endl;
    } else {
        std::cout << "The word \""<<word<<"\" does not match any part of the sentence." << std::endl;
    }


    return 0;
}


#endif //task_4
