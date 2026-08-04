/*
Problem:
Write a program to read a text and encrypt it , decrypt it.

Input:
Mohammed

Output:
Text Before Encryption : Mohammed
Text After Encryption  : Oqjcoogf
Text After Decryption  : Mohammed
 */

#include <iostream>
#include <string>
using namespace std;

string ReadText() {
	string Text;
	cout << "Enter A Text: \n";
	getline(cin, Text);
	return Text;
}

string EncryptText(string Text, short EncryptionKey) {
	for (int i = 0; i <= Text.length(); i++) {
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey) {
	for (int i = 0; i <= Text.length(); i++) {
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

int main() {
	const short EncryptionKey = 2;
	string TextAfterEncryption, TextAfterDecryption;  
	string Text = ReadText();

	TextAfterEncryption = EncryptText(Text, EncryptionKey);
	TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

	cout << "\nText Before Encryption: " << Text << endl;
	cout << "\nText After Encryption: " << TextAfterEncryption << endl;
	cout << "\nText After Decryption: " << TextAfterDecryption << endl;

	return 0;
}