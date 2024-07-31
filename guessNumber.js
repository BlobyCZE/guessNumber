function guessTheNumber() {
    const numberToGuess = Math.floor(Math.random() * 100) + 1;
    let attempts = 0;
    let guessedCorrectly = false;

    console.log("Hádání čísla! Zkus uhádnout číslo mezi 1 a 100.");

    function askGuess() {
        const guess = parseInt(prompt("Zadej svůj tip: "), 10);
        attempts += 1;

        if (isNaN(guess)) {
            console.log("Prosím zadej platné číslo.");
            askGuess();  // Opakování, pokud vstup není číslo
        } else if (guess < numberToGuess) {
            console.log("Tvé číslo je příliš malé. Zkus to znovu.");
            askGuess();
        } else if (guess > numberToGuess) {
            console.log("Tvé číslo je příliš velké. Zkus to znovu.");
            askGuess();
        } else {
            guessedCorrectly = true;
            console.log(`Gratuluji! Uhádnul jsi číslo ${numberToGuess} na ${attempts} pokusů.`);
        }
    }

    askGuess();
}

guessTheNumber();
