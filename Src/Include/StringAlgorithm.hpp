// Created by vonking on 2017/10/19. Copyright (c) 2017 Steven Fung. All rights reserved.

#pragma once

#include <string>

using std::string;

class StringAlgorithm {
public:
    static string *ReverseString(const string str);
    static void ReverseString(string *str, int size, int start = 0);
    static void ReverseWord(string *str);

};
