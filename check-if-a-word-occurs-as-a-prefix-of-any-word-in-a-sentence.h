#ifndef CHECK_IF_A_WORD_OCCURS_AS_A_PREFIX_OF_ANY_WORD_IN_A_SENTENCE_H_
#define CHECK_IF_A_WORD_OCCURS_AS_A_PREFIX_OF_ANY_WORD_IN_A_SENTENCE_H_

#include <algorithm>
#include <string>

namespace solution {

int isPrefixOfWord(std::string sentence, std::string searchWord) {
  // padding a blank before the sentence, nice!
  // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Check If a Word Occurs As a Prefix of Any Word in a Sentence.
  // Memory Usage: 6.1 MB, less than 92.15% of C++ online submissions for Check If a Word Occurs As a Prefix of Any Word in a Sentence.
  //
  sentence = " " + sentence, searchWord = " " + searchWord;
  auto p = sentence.find(searchWord);
  return p == std::string::npos
             ? -1
             : std::count(sentence.cbegin(), sentence.cbegin() + p + 1, ' ');
}

}

#endif  // CHECK_IF_A_WORD_OCCURS_AS_A_PREFIX_OF_ANY_WORD_IN_A_SENTENCE_H_
