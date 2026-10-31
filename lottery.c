fronted code - html


<!DOCTYPE html>
<html>
<head>
    <title>Mini Lottery Simulator</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>

<div class="container">

    <h1>🎰 MINI LOTTERY</h1>
    <p class="subtitle">Try Your Luck Today!</p>

    <div class="lottery-box">

        <h2>Choose Your Lucky Number</h2>

        <input type="number" id="userNumber"
        placeholder="Enter number (1-10)" min="1" max="10">

        <button onclick="playLottery()">
            PLAY LOTTERY
        </button>

        <div class="result">
            <h3 id="winningNumber">Winning Number: ?</h3>
            <h2 id="message">Your Result Will Appear Here</h2>
        </div>

        <button class="reset" onclick="resetGame()">
            RESET
        </button>

    </div>

    <p class="footer">Mini Lottery Simulator Project</p>

</div>

<script src="script.js"></script>

</body>
</html>

frontend code- css


* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    background: #080808;
    color: white;
    font-family: Arial, sans-serif;
    text-align: center;
}

.container {
    margin: 70px auto;
    width: 90%;
    max-width: 500px;
}

h1 {
    color: #00ff99;
    font-size: 35px;
    margin-bottom: 10px;
}

.subtitle {
    color: #aaa;
    margin-bottom: 35px;
}

.lottery-box {
    background: #151515;
    padding: 35px;
    border: 1px solid #00ff99;
    border-radius: 15px;
    box-shadow: 0 0 20px #003d26;
}

h2 {
    margin-bottom: 25px;
}

input {
    width: 100%;
    padding: 15px;
    background: #222;
    color: white;
    border: 1px solid #00ff99;
    border-radius: 8px;
    font-size: 17px;
    margin-bottom: 20px;
}

button {
    width: 100%;
    padding: 15px;
    background: #00ff99;
    color: black;
    font-size: 17px;
    font-weight: bold;
    border: none;
    border-radius: 8px;
    cursor: pointer;
}

button:hover {
    background: #00cc77;
}

.result {
    margin: 30px 0;
    padding: 20px;
    background: #222;
    border-radius: 10px;
}

#winningNumber {
    color: #00ff99;
    margin-bottom: 15px;
}

#message {
    font-size: 18px;
}

.reset {
    background: #333;
    color: white;
}

.footer {
    margin-top: 30px;
    color: #777;
}

frontend code- java


function playLottery() {

    let userNumber = Number(
        document.getElementById("userNumber").value
    );

    let winningNumber = Math.floor(
        Math.random() * 10
    ) + 1;

    let message = document.getElementById("message");
    let result = document.getElementById("winningNumber");

    if (!Number.isInteger(userNumber) ||
        userNumber < 1 || userNumber > 10) {

        message.innerHTML = "Enter a valid number!";
        result.innerHTML = "Winning Number: ?";
        return;
    }

    result.innerHTML =
        "Winning Number: " + winningNumber;

    if (userNumber === winningNumber) {
        message.innerHTML =
            "🎉 CONGRATULATIONS! YOU WON 100 POINTS!";
    }
    else {
        message.innerHTML =
            "Better Luck Next Time!";
    }
}

function resetGame() {

    document.getElementById("userNumber").value = "";

    document.getElementById("winningNumber").innerHTML =
        "Winning Number: ?";

    document.getElementById("message").innerHTML =
        "Your Result Will Appear Here";
}


backend code - c programming given below


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int userNumber, winningNumber;
    char again;

    srand(time(0));

    printf("\n==============================\n");
    printf("      MINI LOTTERY GAME       \n");
    printf("==============================\n");

    do
    {
        printf("\nEnter your lucky number (1-10): ");
        scanf("%d", &userNumber);

        if (userNumber < 1 || userNumber > 10)
        {
            printf("Invalid number! Try again.\n");
            continue;
        }

        winningNumber = rand() % 10 + 1;

        printf("\nYour Number: %d", userNumber);
        printf("\nWinning Number: %d\n", winningNumber);

        if (userNumber == winningNumber)
        {
            printf("\nCongratulations! You Won 100 Points!\n");
        }
        else
        {
            printf("\nBetter Luck Next Time!\n");
        }

        printf("\nPlay Again? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\nThank You For Playing!\n");

    return 0;
}
