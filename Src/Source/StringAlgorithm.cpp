// Created by vonking on 2017/10/19. Copyright (c) 2017 Steven Fung. All rights reserved.
#include <iostream>
#include "StringAlgorithm.hpp"

using std::cout;
using std::endl;

string* StringAlgorithm::ReverseString(const string str) {
    string res;
    if (str.empty())
        return nullptr;

    int j = str.size();
    res.resize(j);
    for (int i = 0; i < str.size(); ++i) {
        res[j-1] = str[i];
        j--;
    }
    return new string(res);
}

void StringAlgorithm::ReverseString(string *str, int size, int start) {
    if ((*str).empty())
        return;

    int lastIdx = start + size - 1;
    char tmp;
    for (int i = start; i < start + size / 2; ++i) {
        tmp = (*str)[lastIdx];
        (*str)[lastIdx] = (*str)[i];
        (*str)[i] = tmp;
        lastIdx--;
    }
    return;
}

void StringAlgorithm::ReverseWord(string *str) {
    if ((*str).empty()) {
        return;
    }
    string &tmp = *str;
    int size = (*str).size();
    int offset = 0;
    int wordsize = 0;
    for (int index = 0; index < size; ++index) {
        if((tmp[index] == ' ') || (index == size - 1))
        {
            if (index == size -1)
            {
                wordsize++;
            }
            StringAlgorithm::ReverseString(&tmp, wordsize, offset);
            offset += (wordsize + 1);
            wordsize = 0;
            continue;
        }

        wordsize++;
    }
}
