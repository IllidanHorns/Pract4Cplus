#include <iostream>
#include <string>
#include <Windows.h>
#include <random>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    std::string slovo;
    int change;
    cout << "Введите слово";
    cout << "\n";
    getline(std::cin, slovo);
    cout << "Выберите 1 из данных вариантов: \n1) Слово выводится задом наперёд \n2) Вывести слово без гласных.\n3) Вывести слово без согласных.\n4) Рандомно раскидывать буквы заданного слова.";
    cout << "\n";
    cin >> change;
    if (change == 1) 
    {
       reverse(begin(slovo), end(slovo));
       cout << slovo;
    }
    else if (change == 2) 
    {
        string ng_slovo;
        string glasnie = "aeyuoiAEYUIOауеяоиАУЕЯОИ";
        for (char i : slovo) 
        {
            int count = 0;
            for (char j : glasnie) 
            {
                count = count+1;
                if (i == j) 
                {
                    break;
                }
                else if (i != j && count == glasnie.size()) 
                {
                    ng_slovo += i;
                };
            }
        }
        cout << ng_slovo;
    }
    else if (change == 3)
    {
        string ng_slovo;
        string glasnie = "бвгджзйклмнпрстфхцчшщБВГДЖЗЙКЛМНПРСТФХЦЧШЩbcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
        for (char i : slovo)
        {
            int count = 0;
            for (char j : glasnie)
            {
                count = count + 1;
                if (i == j)
                {
                    break;
                }
                else if (i != j && count == glasnie.size())
                {
                    ng_slovo += i;
                };
            }
        }
        cout << ng_slovo;
    }
    else if (change == 4) 
    {
        random_shuffle(slovo.begin(), slovo.end());
        cout << slovo;
    }
}


