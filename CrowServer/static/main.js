function clickHello(){
	$.get("/hello", {}, function(response){
		$("#hello-area").html(response);
	});
}

function clickEcho(){
	var theWord = $("#echo-input").val();

	$.get("/echo", {word: theWord}, function(response){

		var split = theWord.split("");
		var reverse = split.reverse();
		var join = reverse.join("");
	
		$("#echo-area").html(join);
		
	});
}

function clickScore(){
	$.get("/superbowl", {}, function(response){
		var details = JSON.parse(response);

		var displayScore = "The " + details["home_team"] + " beat the "
		+ details["away_team"] + " by " + details["home_score"] + 
		" points to " + details["away_score"];
		
		//var displayScore = details["home_team"] + " " + details["home_score"] 
		//+ " : " + details["away_score"] + " " + details["away_team"];
		
		$("#score-area").html(displayScore);
	});
}

function clickUpper(){
	var uniqueWord = $("#upper-input").val();

	$.get("/upper", {word: uniqueWord}, function(response){

		var upperCase = uniqueWord.toUpperCase();

		$("#upper-area").html(upperCase);	
	});
}

function clickLower(){
	var uniqueWord = $("#upper-input").val();

	$.get("/lower", {word: uniqueWord}, function(response){

		var lowerCase = uniqueWord.toLowerCase();

		$("#lower-area").html(lowerCase);	
	});
}