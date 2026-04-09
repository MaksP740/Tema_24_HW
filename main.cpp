#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    cout << "Тема 24 - Класи string, fstream" << endl;

    //=============== [ Task 1 ] ===================
    // int N = 0;
    // string s = "";
    //
    // cout << "Введіть число N: ";
    // cin >> N;
    // cout << "Введіть рядок: ";
    // cin.ignore();
    // getline(cin, s);
    //
    // if (s.length() > N) {
    //     s.erase(0, s.length() - N);
    // }
    // else if (s.length() < N) {
    //     s.insert(0, N - s.length(), '.');
    // }
    //
    // cout << "Результат: " << s << endl;

    //=============== [ Task 2 ] ===================

    // int N1 = 0;
    // int N2 = 0;
    // string S1, S2, S3;
    //
    // cout << "Введіть число N1: ";
    // cin >> N1;
    // cout << "Введіть число N2: ";
    // cin >> N2;
    // cin.ignore();
    // cout << "Введіть рядок S1: ";
    // getline(cin, S1);
    // cout << "Введіть рядок S2: ";
    // getline(cin, S2);
    // S3 = S1.substr(0, N1) + S2.substr(S2.length() - N2);
    //
    // cout << "Результат: " << S3 << endl;

    //=============== [ Task 3 ] ===================

    // char C = '.';
    // string S = "12.34.56.78";
    // string res = "";
    //
    // for (int i = 0; i < S.length(); i++) {
    //     if (S[i] == C) {
    //         S.insert(i, 1, C);
    //         i++;
    //     }
    // }
    // cout << "Результат: " << S << endl;

    //=============== [ Task 4 ] ===================

    // char C = '.';
    // string S = "hello world. hello step. hello it.";
    // string S0 = "good";
    //
    // for (int i = 0; i < S.length(); i++) {
    //     if (S[i] == C) {
    //        S = S.insert(i + 2, S0);
    //         i += S.length();
    //     }
    // }
    // cout << S << endl;

    //=============== [ Task 6 ] ===================

    // string S, S0;
    // cout << "Введіть рядок S: ";
    // getline(cin, S);
    //
    // cout << "Введіть рядок S0: ";
    // getline(cin, S0);
    //
    // if (S.find(S0) != -1) {
    //     cout << "True";
    // }
    // else {
    //     cout << "False";
    // }

    //=============== [ Task 7 ] ===================

    //=============== [ Task 8 ] ===================

    //=============== [ Task 9 ] ===================

    //=============== [ Task 10 ] ===================

    // string S = "hello world. hello step. hello it.";
    // string S1, S2;
    //
    // cout << "Введіть рядок S1: ";
    // getline(cin, S1);
    // cout << "Введіть рядок для заміни: ";
    // getline(cin, S2);
    //
    // int pos = S.find(S1);
    //
    // if (pos != -1) {
    //     S.replace(pos, S1.length(), S2);
    // }
    //
    // cout << S << endl;
    // cout <<"Результат: " << S << endl;


    //=============== [ Task 11 ] ===================

    //=============== [ Task 12 ] ===================

    //=============== [ Task 13 ] ===================

    //=============== [ Task 14 ] ===================

    // string name;
    // cout << "Введіть назву файлу: ";
    // cin >> name;
    //
    // if (name.find("*") != -1) {
    //     cout << "Імя файлу не підходить" << endl;
    // }
    // else {
    //     cout << "Файл створений успішно" << endl;
    //     ofstream file(name + ".txt");
    // if (file.is_open()) {
    //         file << "Hello Maks Ponomarenko";
    //         file.close();
    //     }
    //     cout << "Файл збережений";
    // }

    //=============== [ Task 15 ] ===================

    // int N = 0;
    //
    // cout << "Скільки парних чисел додати до файлу: ";
    // cin >> N;
    //
    // ofstream file("task_15.txt");
    // if (file.is_open()) {
    //     for (int i = 1; i <= N; i++) {
    //         file << i * 2 << " ";
    //     }
    //     file.close();
    // }

    //=============== [ Task 16 ] ===================

    //=============== [ Task 17 ] ===================

    string line_text;

    ifstream file("Task_17.txt");
    if (file.is_open()) {

        while (!file.eof()) {
            // file >> line_text;
            getline(file, line_text);
            if (line_text.length() > 0) {
                cout << line_text.substr(3, 2) << endl;
                int m = atoi(line_text.substr(3, 2).c_str());
            }
        }
        file.close();

    }

    //=============== [ Task 18 ] ===================
























    return 0;
}
