window.addEventListener('load', typeOutMain, false);

function typeOutMain () {
	const terminalBorder = document.getElementsByClassName("terminal-border")[0];
	terminalBorder.addEventListener("animationend", typeOutNext); 
};

function typeOutNext() {
	// Try to set last being-typed-out to done
	const beingTypedOut = document.getElementsByClassName("being-typed-out");
	if (beingTypedOut.length > 0) {
		let lastElement = beingTypedOut[beingTypedOut.length - 1];
		lastElement.classList.remove("being-typed-out");
		if (lastElement.tagName == "IMG") {
			lastElement.classList.remove("being-typed-out-img")
		} else if (lastElement.tagName == "LI") {
			lastElement.classList.remove("being-typed-out-li");
		} else if (lastElement.classList.contains("few-chars")) {
			lastElement.classList.remove("being-typed-out-few");
		} else if (lastElement.classList.contains("avg-chars")) {
			lastElement.classList.remove("being-typed-out-avg");
		} else if (lastElement.classList.contains("lot-chars")) {
			lastElement.classList.remove("being-typed-out-lot");
		}
		lastElement.classList.add("typed-out");

		if (document.getElementsByClassName("not-typed-out").length == 0) {
			lastElement.classList.remove("typed-out");
			lastElement.classList.add("blink");
			return;
		}
	}

	// Get first element that is not typed out yet
	const toBeTypedOut = document.getElementsByClassName("not-typed-out");
	if (toBeTypedOut.length == 0) {
		return;
	}

	// Change class to type-out
	let currentElement = toBeTypedOut[0];
	currentElement.classList.remove("not-typed-out");
	currentElement.classList.add("being-typed-out");
	
	// Switch step-amount
	if (currentElement.tagName == "IMG") {
		currentElement.classList.add("being-typed-out-img");
	} else if (currentElement.tagName == "LI") {
		currentElement.classList.add("being-typed-out-li");
	} else if (currentElement.classList.contains("few-chars")) {
		currentElement.classList.add("being-typed-out-few");
	} else if (currentElement.classList.contains("avg-chars")) {
		currentElement.classList.add("being-typed-out-avg");
	} else if (currentElement.classList.contains("lot-chars")) {
		currentElement.classList.add("being-typed-out-lot");
	} else {
		console.log("Oh no, big time problem");
	}

	// Start next when done
	currentElement.addEventListener("animationend", typeOutNext);
}
