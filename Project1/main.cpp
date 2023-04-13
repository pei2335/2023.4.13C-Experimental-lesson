#include <iostream>
#include <string>
#include <algorithm>
#include"head.h"

using namespace std;


int main() {
    int n;
    cout << "请输入字符串数量: ";
    cin >> n;

    // 动态分配内存来存储字符串
    string* plaintext = new string[n];
    string* ciphertext = new string[n];

    // 输入明文字符串
    for (int i = 0; i < n; i++) {
        cout << "请输入第 " << i + 1 << " 个字符串: ";
        cin >> plaintext[i];
    }

    // 对明文字符串进行加密
    for (int i = 0; i < n; i++) {
        ciphertext[i] = encryptDecrypt(plaintext[i]);
    }

    // 按字母顺序对密文字符串进行排序
    sort(ciphertext, ciphertext + n, compare);

    // 输出排序后的密文字符串
    cout << "排序后的密文字符串: " << endl;
    for (int i = 0; i < n; i++) {
        cout << ciphertext[i] << endl;
    }

    // 对密文字符串进行解密
    for (int i = 0; i < n; i++) {
        plaintext[i] = encryptDecrypt(ciphertext[i]);
    }

    // 输出解密后的明文字符串
    cout << "解密后的明文字符串: " << endl;
    for (int i = 0; i < n; i++) {
        cout << plaintext[i] << endl;
    }

    // 释放动态分配的内存
    delete[] plaintext;
    delete[] ciphertext;

    return 0;
}
