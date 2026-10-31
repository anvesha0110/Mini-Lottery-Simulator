
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
