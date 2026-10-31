// //
// // Created by User on 22/10/26.
// //
// string ReadStirng() {
//     string StringFromTheUser;
//     cout << "Please Enter Your String?\n";
//     // cin >> StringFromTheUser; will read the first letter only !!
//     getline(cin, StringFromTheUser);
//     return StringFromTheUser;
// }
//
// void PrintFirsLetterOfEachLetter(string S1) {
//     bool IsFirstLetter = true;
//     for (int i = 0 ; i < S1.length(); i++) {
//         if (S1[i] != ' ' && IsFirstLetter) {
//             cout <<toupper(S1[i]) << endl;
//         }
//         IsFirstLetter = (S1[i] == ' ' ? true : false);
//     }
// }
//
// int main() {
//     PrintFirsLetterOfEachLetter(ReadStirng());
// }


#include <iostream>
#include <string>
using namespace std;

string ReadStirng() {
    string StringFromTheUser;
   cout << "Plz enter you string?\n";
    getline(cin, StringFromTheUser);
    return StringFromTheUser;
}

void PrintFinalResult(stirng st) {
    bool IsFirstletter = true;
    for (int i = 0; i < st.length(); i++ ) {
        cout << toupper(s1[i]) << endl;

    }
    IsFirstletter = (st[i] == ' ' ? true: false);
}
int main() {
    PrintFinalResult(ReadStirng());
    return 0;

}


