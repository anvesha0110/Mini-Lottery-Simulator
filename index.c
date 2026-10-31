
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
