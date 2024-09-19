function sum() {
  const numberInput = parseInt(document.getElementById("numberInput").value);
  const unhide = document.getElementById("hiddenInput");

  let element = 0;
  unhide.style.display = "block";

  for (let index = numberInput; index >= 0; index--) {
    element = element + index;
  }

  const result = document.getElementById("numberOutput");
  result.value = element;
}

function clean() {
  location.reload();
}
