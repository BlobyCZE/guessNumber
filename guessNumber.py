import random

def guess_the_number():
    # Generování náhodného čísla mezi 1 a 100
    number_to_guess = random.randint(1, 100)
    attempts = 0
    guessed_correctly = False

    print("Hádání čísla! Zkus uhádnout číslo mezi 1 a 100.")

    while not guessed_correctly:
        try:
            guess = int(input("Zadej svůj tip: "))
            attempts += 1

            if guess < number_to_guess:
                print("Tvé číslo je příliš malé. Zkus to znovu.")
            elif guess > number_to_guess:
                print("Tvé číslo je příliš velké. Zkus to znovu.")
            else:
                guessed_correctly = True
                print(f"Gratuluji! Uhádnul jsi číslo {number_to_guess} na {attempts} pokusů.")
        except ValueError:
            print("Prosím zadej platné číslo.")

if __name__ == "__main__":
    guess_the_number()
