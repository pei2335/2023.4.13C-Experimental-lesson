#include <iostream>
#include <string>
#include <algorithm>
#include"head.h"

using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key = 'K'; // 任意选择一个密钥
    string output = toEncrypt;

    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;

    return output;
}

// 比较函数，用于按字母顺序排序字符串
bool compare(string a, string b) {
    return a < b;
}
