document.addEventListener("DOMContentLoaded", function() {
    const textInput = document.getElementById("textInput");
    const submitButton = document.getElementById("submitButton");
    const outputDiv = document.getElementById("output");
  
    submitButton.addEventListener("click", function() {
      const inputValue = textInput.value.trim();
      if (inputValue !== "") {
        outputDiv.textContent = inputValue;
        textInput.value = ""; // Clear the input field
      } else {
        alert("Please enter some text.");
      }
    });
  });
  