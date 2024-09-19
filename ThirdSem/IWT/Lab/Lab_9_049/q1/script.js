let span1 = document.getElementById("wrapup");
let reset = document.getElementById("reset");
span1.style.display = "none";
reset.style.visibility = "hidden";
function sumTheNumber() {
  span1.style.display = "block";
  let num1, num2, add, sub, mul, div;
  num1 = parseFloat(document.getElementById("num1").value);
  num2 = parseFloat(document.getElementById("num2").value);

  Math.floor(add) = num1 + num2;
  Math.floor(sub) = num1 - num2;
  Math.floor(mul) = num1 * num2;
  Math.floor(div) = num1 / num2;

  document.getElementById("add").value = add;
  document.getElementById("sub").value = sub;
  document.getElementById("mul").value = mul;
  document.getElementById("div").value = div;
  reset.style.visibility = "visible";
}

function clean() {
  location.reload();
}
