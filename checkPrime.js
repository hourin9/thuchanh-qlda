console.log("Enter a number to check if it is prime or not: ");

process.stdin.on("data", function (data) {
    const num = parseInt(data.toString().trim());
    if (isPrime(num)) {
        console.log(num + " is a prime number.");
    } else {        console.log(num + " is not a prime number.");
    }
    process.exit();
});

function isPrime(n) {
    if (n <= 1) return false;
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) return false;
    }
    return true;
}