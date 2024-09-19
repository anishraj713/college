function validateCard() {
  const cardOption = document.getElementById("cardType").value;
  const cardNumber = document.getElementById("cardNumber").value;
  const hideResult = document.getElementById("hideParse");
  const resultDiv = document.getElementById("result");

  let regex;
  hideResult.style.visibility = "visible";

  switch (cardOption) {
    case "American Express":
      regex = /^3[47][0-9]{13}$/;
      break;

    case "Diners Club":
      regex = /^3(0[0-5]|[68])[0-9]{11}$/;
      break;

    case "Discover":
      regex = /^6(011|5[0-9]{2})[0-9]{12}$/;
      break;

    case "JCB":
      regex = /^(2131|1800)[0-9]{11}$|^35[0-9]{14}$/;
      break;

    case "MasterCard":
      regex = /^5[1-5][0-9]{14}$/;
      break;

    case "Visa":
      regex = /^4[0-9]{12}([0-9]{3})?$/;
      break;
    default:
      regex = "Null";
  }

  if (regex && regex.test(cardNumber)) {
    resultDiv.value = "Card is Valid";
    resultDiv.className = "success";
  } else {
    result.value = "Card is Not Valid";
    resultDiv.className = "error";
  }
}
function reset() {
  location.reload();
}
