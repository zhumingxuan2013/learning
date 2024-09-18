#include<iostream>
using namespace std;
int main() {
    string ans [] = {
        "563", // 双引号中替换为 A 题的答案
        "20312088", // 双引号中替换为 B 题的答案
        "39001250856960000", // 双引号中替换为 C 题的答案
        "3616159", // 双引号中替换为 D 题的答案
        "552", // 双引号中替换为 E 题的答案
    };
    char T;
    cin >> T;
    cout << ans[T - 'A'] << endl;
    return 0;
}