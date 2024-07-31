#include <iostream>
#include <cstdlib>
#include <ctime>

void guess_the_number() {
    std::srand(std::time(nullptr));  // Inicializace náhodného generátoru
    int number_to_guess = std::rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    bool guessed_correctly = false;

    std::cout << "Hádání čísla! Zkus uhádnout číslo mezi 1 a 100." << std::endl;

    while (!guessed_correctly) {
        std::cout << "Zadej svůj tip: ";
        std::cin >> guess;
        attempts++;

        if (std::cin.fail()) {
            std::cin.clear(); // Vymazání chybového stavu
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Vymazání špatného vstupu
            std::cout << "Prosím zadej platné číslo." << std::endl;
        } else if (guess < number_to_guess) {
            std::cout << "Tvé číslo je příliš malé. Zkus to znovu." << std::endl;
        } else if (guess > number_to_guess) {
            std::cout << "Tvé číslo je příliš velké. Zkus to znovu." << std::endl;
        } else {
            guessed_correctly = true;
            std::cout << "Gratuluji! Uhádnul jsi číslo " << number_to_guess << " na " << attempts << " pokusů." << std::endl;
        }
    }
}

int main() {
    guess_the_number();
    return 0;
}
