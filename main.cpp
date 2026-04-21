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
    // string S0 = " good";
    //
    // for (int i = 0; i < S.length(); i++) {
    //     if (S[i] == C) {
    //        S.insert(i, S0);
    //         i += S0.length();
    //     }
    // }
    // cout << S << endl;

    //=============== [ Task 5 ] ===================

    // char C;
    // string S, S0;
    //
    // cout << "Введіть рядок C: ";
    // cin >> C;
    // cin.ignore();
    // cout << "Введіть рядок S: ";
    // getline(cin, S);
    // cout << "Введіть рядок S0: ";
    // getline(cin, S0);
    //
    // for (int i = 0; i < S.length(); i++) {
    //         if (S[i] == C) {
    //            S.insert(i + 1, S0);
    //             i += S0.length();
    //         }
    //     }
    //     cout << S << endl;

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

    // string S;
    // cout << "Введіть рядок S: ";
    // getline(cin, S);
    // string S0;
    // cout << "Введіть рядок S0: ";
    // getline(cin, S0);
    //
    // int res = 0;
    //
    //
    // for (int i = 0; i <= S.length() - S0.length(); i++) {
    //     if (S.substr(i, S0.length()) == S0) {
    //         res++;
    //     }
    // }
    // cout << "Кількість входжень: " << res << endl;

    //=============== [ Task 8 ] ===================

    // string S;
    // cout << "Введіть рядок S: ";
    // getline(cin, S);
    // string S0;
    // cout << "Введіть рядок S0: ";
    // getline(cin, S0);
    //
    // size_t res = S.find(S0);
    //
    // if (res != string::npos) {
    //     S.erase(res, S0.length());
    // }
    // cout << "Результат: " << S << endl;

    //=============== [ Task 9 ] ===================

    // string S;
    // cout << "Введіть рядок S: ";
    // getline(cin, S);
    // string S0;
    // cout << "Введіть рядок S0: ";
    // getline(cin, S0);
    //
    // size_t res = 0;
    //
    // while ((res = S.find(S0, res)) != string::npos ) {
    //     S.erase(res, S0.length());
    // }
    // cout << "Результат: " << S << endl;

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

    // string S = "hello world. hello step. hello it.";
    // string S1 = "hello";
    // string S2 = "hi" ;
    //
    // for (int i = 0; i <= S.length();) {
    //
    //     int pos = S.find(S1, i);
    //     if (pos != -1) {
    //         S.replace(pos, S1.length(), S2);
    //         i = pos + S2.length();
    //     }
    //     else {
    //         break;
    //     }
    // }
    // cout <<"Результат: " << S << endl;

    //=============== [ Task 12 ] ===================

    // string S = "Program";
    //
    // string res = "";
    //
    // for (int i = 0; i < S.length(); i += 2) {
    //     res += S[i];
    // }
    //
    // for (int i = S.length() - 1; i >= 0; i--) {
    //     if (i % 2 != 0) {
    //         res += S[i];
    //     }
    // }
    //
    // cout << "Результат: " << res << endl;

    //=============== [ Task 13 ] ===================

    // string S = "Pormagr";
    // int S1 = S.length();
    //
    // string N(S1, ' ');
    //
    // int k = 0;
    //
    // for (int i = 0; i < S1; i += 2) {
    //     N[i] = S[k++];
    // }
    //
    // for (int i = S1 - 1; i >= 0; i--) {
    //     if (i % 2 == 1) {
    //         N[i] = S[k++];
    //     }
    // }
    //
    // cout << N << endl;

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

    // string File1, File2, File3;
    //
    // ofstream in("SD.txt");
    //
    // if (in.is_open()) {
    //
    //     ifstream in1("SA.txt");
    //     ifstream in2("SB.txt");
    //     ifstream in3("SC.txt");
    //
    //     while (getline(in1, File1) && getline(in2, File2) && getline(in3, File3)) {
    //
    //         in << "-> " << File1 << " " << File2 << " " << File3 << endl;
    //     }
    //     in.close();
    //     in1.close();
    //     in2.close();
    //     in3.close();
    //     cout << "Файл успішно збережено!";
    //
    // }
    // else {
    //     cout << "Файл не відкривається!";
    //     return 1;
    // }

    //=============== [ Task 17 ] ===================

    // string line_text;
    //
    // ifstream file("Task_17.txt");
    // if (file.is_open()) {
    //
    //     while (!file.eof()) {
    //         // file >> line_text;
    //         getline(file, line_text);
    //         if (line_text.length() > 0) {
    //             cout << line_text.substr(3, 2) << endl;
    //             int m = atoi(line_text.substr(3, 2).c_str());
    //         }
    //     }
    //     file.close();
    //
    // }

    //=============== [ Task 18 ] ===================

    // ifstream fin("File17.txt");
    // if (fin.is_open()) {
    //
    //
    //     ofstream fin2("File_result.txt");
    //     string date;
    //
    //     while (getline(fin, date)) {
    //         if (date.length() >= 5) {
    //             string month = date.substr(3,2);
    //             if (month == "06" || month == "07" || month == "08") {
    //                 fin2 << date << endl;
    //             }
    //         }
    //     }
    //     fin.close();
    //     fin2.close();
    //     cout << "Файл успішно збережено!";
    // }
    // else {
    //     cout << "Файл не відкривається!";
    //     return 1;
    // }

    //=============== [ Task 19 ] ===================

    // ifstream fin1("f1.txt");
    // ifstream fin2("f2.txt");
    //
    // if (!fin1.is_open() || !fin2.is_open()) {
    //     cout << "Файл не відкрився!" << endl;
    //     return 1;
    // }
    // else {
    //     string slovo;
    //     string slovo1;
    //     string slovo2;
    //     fin2 >> slovo1 >> slovo2;
    //     ofstream recfile("result19.txt");
    //     while (getline(fin1, slovo)) {
    //         for (int i = 0; i < slovo.length(); i++) {
    //             int pos = slovo.find(slovo1, i);
    //             if (pos != -1) {
    //                 slovo.replace(pos, slovo1.length(), slovo2);
    //             }
    //         }
    //         recfile << slovo << endl;
    //     }
    //     fin1.close();
    //     fin2.close();
    //     recfile.close();
    //     cout << "Файл успішно збережено!";
    // }


    //=============== [ Task 20 ] ===================

    ifstream file("f.txt");
    ofstream recfile("result20.txt");
    if (!file.is_open() || !recfile.is_open()) {
        cout << "Файл не відкрився!" << endl;
        return 1;
    }

    int choice;
    cout << "Оберіть формат:\n";
    cout << "1 - Ім'я По батькові Прізвище\n";
    cout << "2 - Прізвище І.П.\n";
    cout << "Зробіть вибір: ";
    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "Не вірний вибір!" << endl;
        return 1;
    }
    string surname, name, patronymic;
    while (file >> surname >> name >> patronymic) {
        switch (choice) {
            case 1: {
                recfile << name << " " << patronymic << " " << surname << endl;
                break;
            }
            case 2: {
                recfile << surname << " ";
                if (!name.empty()) {
                    recfile << name[0] << ". ";
                }
                if (!patronymic.empty()) {
                    recfile << patronymic[0] << ". ";
                   recfile << endl;
                }
            }
        }
    }
    file.close();
    recfile.close();
    cout << "Файл успішно збережено!";


    return 0;
}