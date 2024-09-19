let span = document.getElementById("div");
let reset = document.getElementById("reset");
span.style.visibility = "hidden";
reset.style.visibility = "hidden";

function calSi() {
  span.style.visibility = "visible";
  let principal, rate, time, sii, amount;

  principal = parseInt(document.getElementById("principal").value);
  rate = parseInt(document.getElementById("rate").value);
  time = parseInt(document.getElementById("time").value);

  sii = parseInt((principal * rate * time) / 100);
  document.getElementById("si").value = sii;

  amount = principal + sii;
  document.getElementById("amount").value = amount;
  reset.style.visibility = "visible";
}

function clean() {
  location.reload();
}
