/*
問題文
このコンテスト、つまり AtCoder Beginner Contest の略称は、アルファベット 3 文字で ABC となっております。
そして、ABC のうち特定の回を指すときは、何回目の ABC かを 3 桁の数字で表して後ろに付け、ABC680 のように呼びます。例えば ABC680 は、680 回目の ABC のことを指します。
では、N 回目の ABC はどのように表すでしょうか、これを出力するプログラムを作成してください。
*/

#include<iostream>
#include<string>

int main() {
	int num;
	std::string str("ABC");
	
	std::cin >> num; 

	std::cout << str + std::to_string(num) << std::endl;  //std::cout << str << num << std::endl;でも良かったが int から　string へのキャスト練習

	return 0;
}