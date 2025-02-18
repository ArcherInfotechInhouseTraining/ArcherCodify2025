var userClickedPattern = [];

var gamePattern = [];
var buttonColours = ["red", "blue", "green", "yellow"];

var level = 0;
var started = false;

$(".btn").on("click", function(){
    var userChosenColour = $(this).attr("id");
    userClickedPattern.push(userChosenColour);
    
    playSound(userChosenColour);
    
    animatePress(userChosenColour);
    
    checkAnswer(userClickedPattern.length-1);
 });


function nextSequence(){
    //to empty the array after checking answer
    userClickedPattern = [];
    level++;
    $("#level-title").text("Level " + level);

    var randomNumber = Math.random();
    randomNumber = Math.floor(randomNumber * 4);
    
    var randomChosenColour = buttonColours[randomNumber];
    gamePattern.push(randomChosenColour); 

    $("#"+randomChosenColour).fadeOut(100).fadeIn(100).fadeOut(100).fadeIn(100);
    playSound(randomChosenColour);
  
    }


function playSound(name){
    var audio = new Audio("sounds/"+name+".mp3");
    audio.play();
        }

function animatePress(curruntColour){
    $("#"+curruntColour).addClass("pressed");

    setTimeout(function () {      
        $("#"+curruntColour).removeClass("pressed");         
        }, 100);
        }


$(document).keypress(function() {
       if (!started) {
    
            $("#level-title").text("Level " + level);
            nextSequence();
            started = true;
    }
    });

function checkAnswer(currentLevel){
    if(userClickedPattern[currentLevel] === gamePattern[currentLevel]){
        console.log("success");
        if(userClickedPattern.length === gamePattern.length)
        {       
             setTimeout(function(){
                  nextSequence();
             }, 1000);
        }
    }
    else{
        console.log("Wrong");
        $("body").addClass("game-over");
        setTimeout(function () {      
            $("body").removeClass("game-over");         
            }, 300);

        var audio = new Audio("sounds/wrong.mp3");
        audio.play();

        $("#level-title").text("Game Over, Press Any Key to Restart");
        startOver();
    }

}

function startOver(){
    gamePattern = [];
    level = 0;
    started = false;
}   