math.randomseed(os.time()) -- Inicializace náhodného generátoru

function guess_the_number()
    -- Generování náhodného čísla mezi 1 a 100
    local number_to_guess = math.random(1, 100)
    local attempts = 0
    local guessed_correctly = false

    print("Hádání čísla! Zkus uhádnout číslo mezi 1 a 100.")

    while not guessed_correctly do
        io.write("Zadej svůj tip: ")
        local input = io.read()
        local guess = tonumber(input)

        if guess then
            attempts = attempts + 1

            if guess < number_to_guess then
                print("Tvé číslo je příliš malé. Zkus to znovu.")
            elseif guess > number_to_guess then
                print("Tvé číslo je příliš velké. Zkus to znovu.")
            else
                guessed_correctly = true
                print(string.format("Gratuluji! Uhádnul jsi číslo %d na %d pokusů.", number_to_guess, attempts))
            end
        else
            print("Prosím zadej platné číslo.")
        end
    end
end

guess_the_number()
