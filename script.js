// Get references to all input fields
const rentInput = document.getElementById('rent');
const foodInput = document.getElementById('food');
const transportInput = document.getElementById('transport');
const othersInput = document.getElementById('others');

// Get references to bar divs
const rentBar = document.getElementById('rent-bar');
const foodBar = document.getElementById('food-bar');
const transportBar = document.getElementById('transport-bar');
const othersBar = document.getElementById('others-bar');

// Function to update the bars
function updateBars() {
  const rent = parseFloat(rentInput.value) || 0;
  const food = parseFloat(foodInput.value) || 0;
  const transport = parseFloat(transportInput.value) || 0;
  const others = parseFloat(othersInput.value) || 0;

  const total = rent + food + transport + others;

  // Avoid divide-by-zero
  if (total === 0) {
    rentBar.style.width = "0%";
    foodBar.style.width = "0%";
    transportBar.style.width = "0%";
    othersBar.style.width = "0%";
    return;
  }

  // Calculate percentages
  const rentPercent = (rent / total) * 100;
  const foodPercent = (food / total) * 100;
  const transportPercent = (transport / total) * 100;
  const othersPercent = (others / total) * 100;

  // Set widths dynamically
  rentBar.style.width = `${rentPercent}%`;
  foodBar.style.width = `${foodPercent}%`;
  transportBar.style.width = `${transportPercent}%`;
  othersBar.style.width = `${othersPercent}%`;
}

// Attach event listeners to all input fields
[rentInput, foodInput, transportInput, othersInput].forEach(input => {
  input.addEventListener('input', updateBars);
});
