#include <string.h>
#include <iostream>
#include <cstring>
#include <algorithm>

void z1() {
    char string[100];
    std::cout << "Введите текст:";
    std::cin.getline(string, 100);
    int count = 0;
    for (int i = 0; string[i] != '\0'; ++i)
    {
        if (string[i] >= '0' && string[i] <= '9') {
            count++;
        }
    }
    std::cout << "Количество цифр в тексте: " << count << std::endl;
}


//void z2() {
//    char str[] = "So she was considering in her own mind, as well as she could, for the hot day made her feel very sleepy and stupid, whether the pleasure of making a daisy-chain would be worth the trouble of getting up and picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her.";
//    int count = 0;
//    char* word = strtok(str, " ,");
//    for (; word != NULL;)
//    {
//        if (strlen(word) == 3) {
//            count++;
//        }
//        word = strtok(NULL, " ,");
//    }
//    std::cout << "Количество слов длиной 3 символа: " << count << std::endl;
//}

void z3() {
    char str[] = "So she was considering in her own mind, as well as she could, for the hot day made her feel very sleepy and stupid, whether the pleasure of making a daisy-chain would be worth the trouble of getting up and picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her.";
    char* words[100];
    int lengths[100];
    int count = 0;

    char* word = strtok(str, " ,");
    while (word != NULL) {
        words[count] = word;
        lengths[count] = strlen(word);
        count++;
        word = strtok(NULL, " ,");
    }
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (lengths[i] < lengths[j]) {
                int Length = lengths[i];
                lengths[i] = lengths[j];
                lengths[j] = Length;

                char* tempWord = words[i];
                words[i] = words[j];
                words[j] = tempWord;
            }
        }
    }
    std::cout << "Слова в порядке убывания их длин:\n";
    for (int i = 0; i < count; i++) {
        std::cout << words[i] << '\n';
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    //z1();
    //z2();
    z3();
}
