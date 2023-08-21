window.addEventListener('load', wait, false);

function wait() {
var observer = new MutationObserver(function (mutations) {
  mutations.forEach(function (mutation) {
    if (mutation.target.classList.contains('being-typed-out')) {
	    console.log("a");
      selectInput();
    }
  });
});

observer.observe(document.getElementById('last-to-be-typed'), {
    attributes: true,
    attributeFilter: ['class']
});
}

function selectInput () {
  var input = document.getElementById('terminal-input');
  input.focus({
	preventScroll: true
  });
  input.select();
	input.addEventListener("input", displayInput, false);
	input.addEventListener("keyup", function(e) {
	    if (e.key == "Enter") {
		    enterKeyPressed();
		}
	       });
};

function displayInput() {
	var display = document.getElementById("terminal-line");
  var input = document.getElementById('terminal-input');
	display.innerHTML = input.value;
}

function enterKeyPressed() {
		var display = document.getElementById("terminal-line");
  var input = document.getElementById('terminal-input');
	input.value="";
	display.innerHTML = "";
}
