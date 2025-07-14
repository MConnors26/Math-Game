var num1;
var num2;
let num3;
let ans;
let res;
let answer;

let correct = "Correct!";
let incorrect = "Incorrect!";
let totCor = 0;
let totIncor = 0;
let rounds = 0;


function disNums() {
    num1 = Math.floor(Math.random()*10) + 1;
    num2 = Math.floor(Math.random()*10) + 1;

    document.getElementById("num1dis").innerHTML = num1;
    document.getElementById("num2dis").innerHTML = num2;
    num3 = parseInt(num1) + parseInt(num2);
    

}

function play() {
    ans = document.getElementById("ans").value;
    
    if (ans == num3) {
        document.getElementById("response").innerHTML = correct;
        rounds++;
        document.getElementById("total").innerHTML = rounds;
        totCor++;
        document.getElementById("totCor").innerHTML = totCor;

    } else {
        document.getElementById("response").innerHTML = incorrect;
        rounds++;
        document.getElementById("total").innerHTML = rounds;
        totIncor++;
        document.getElementById("totIncor").innerHTML = totIncor;
    }
}