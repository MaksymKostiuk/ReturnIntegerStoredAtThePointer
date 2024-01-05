#include <stdio.h>

long converter(char *numstring, int base) {
    long result = 0;

    while (*numstring != '\0') {
        int digit = 0;

        // Обчислення числового значення символу відповідно до системи числення
        if (*numstring >= '0' && *numstring <= '9') {
            digit = *numstring - '0';
        } else if (*numstring >= 'A' && *numstring <= 'F') {
            digit = *numstring - 'A' + 10;
        } else if (*numstring >= 'a' && *numstring <= 'f') {
            digit = *numstring - 'a' + 10;
        } else {
            // Обробка некоректних символів у рядку
            // Якщо потрібно, додайте обробку помилок тут
        }

        // Додавання числового значення символу до загального результату з урахуванням бази числення
        result = result * base + digit;
        
        numstring++; // Перехід до наступного символу у рядку
    }

    return result;
}


int main(){
    char numstring[] = "234"; // Приклад рядка для перетворення
    int base = 10; // Приклад системи числення
    long result = converter(numstring, base); // Виклик функції конвертації

    // Виведення результату на екран
    printf("Result: %ld\n", result);

    return 0;
}