window.onload = function() {
	var myImage = document.getElementById("topimg");
	const possible = [
		"blob.gif", "pepeJam.webp", "pepeD.webp", "catJAM.webp", "bongoTap.webp", "blobDance.webp", "nodders.webp", "dance.webp",
		"pepoDance.webp", "pepeDs.webp", "monkaSteer.webp", "partyParrot.webp", "pepeJamJam.webp", "PEPEDS.webp", "ratJAM.webp"
	];
	myImage.src = "imgs/" + possible[getRandomInt(possible.length)];
};

function getRandomInt(max) {
  return Math.floor(Math.random() * max);
}
