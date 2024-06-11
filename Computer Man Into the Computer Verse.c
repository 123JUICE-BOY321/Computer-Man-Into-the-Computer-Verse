#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num,points=0;

int line(){
    printf("__________________________________________________\n");
}

int choice(char* choice1,char* choice2){
    int reply;
    printf("\n\n%s\n",choice1);
    printf("%s\n",choice2);
    scanf("%d",&reply);
    line();
    return reply;
}

int game_close(){
    printf("You pressed something wrong and exploded into glitter of 1s and 0s.\nTHE END");
}

int game_loop(){
    printf("Guess the binary number that the computer is thinking:");
    scanf("%d",&num);
    if(num==rand()%2){
        printf("Correct!\n");
        points+=1;
        printf("Points=%d\n",points);
        if(points==3){
            scene_end();}
        game_loop();}
    else{
        game_close();}
}

int intro(){
    printf("\t    Welcome to\nComputer-Man: Into The Computer-Verse\n\nPress Enter to Continue");
    getchar();
    line();
}

int scene1(){
    printf("You are drinking coffee.\nCoffee falls on computer.\nComputer short circuits and you get sucked into the computer." );
    int reply=choice("Press 1 to explore the computer world.","Press 2 to find a way to escape.");
    if(reply==1){
        scene11();}
    else if(reply==2){
        scene12();}
    else{
        game_close();}
}

int scene11(){
    printf("You are amazed by the colorful and vibrant digital world inside the computer. You see various icons, files, and programs.");
    int reply=choice("Press 1 to click on an icon that looks like a game.","Press 2 to open a file that has a strange name.");
    if(reply==1){
        scene111();}
    else if(reply==2){
        scene112();}
    else{
        game_close();}
}

int scene111(){
    printf("You enter a futuristic open-world cyberpunk style game. A few people with guns are waving at you.");
    int reply=choice("Press 1 to join them.","Press 2 to ignore them.");
    if(reply==1){
        scene1111();}
    else if(reply==2){
        scene1112();}
    else{
        game_close();}
}

int scene1111(){
    printf("You join their gang and tell them about how you got stuck in the computer. One of them tells you that there is a exit in the cyber-dragon arena. Other tells you there is an all knowing AI in the app called browser that can help you exit.");
    int reply=choice("Press 1 to go to cyber-dragon arena.","Press 2 to find the AI.");
    if(reply==1){
        scene11111();}
    else if(reply==2){
        scene11112();}
    else{
        game_close();}
}

int scene11111(){
    printf("You enter the cyber-dragon arena and see the dragon. A 200 meter tall metallic monster. There is a door behind the dragon that looks like an exit door.");
    int reply=choice("Press 1 to be the hero.","Press 2 to hide from the dragon.");
    if(reply==1){
        scene111111();}
    else if(reply==2){
        scene111112();}
    else{
        game_close();}
}

int scene111111(){
        printf("You slay the dragon in the most epic way possibe. That is what I would have said if you were not level 1 in the game. The dragon told you were tasty.\nTHE END");
}

int scene111112(){
        printf("While trying to find a way to hide in the open ground you trip over a sword that flings itself and hits the weak spot of the dragon, instantly killing it. You enter the door and realized that you saved the princess.\n\n\nAnd that, kids, is how I met your mother.\nTHE END");
}

int scene11112(){
    printf("You exit that game and enter the browser");
    int reply=choice("Press 1 to if you think that the website is Sigma AI.","Press 2 to if you think the website is Youtube.");
    if(reply==1){
        scene111121();}
    else if(reply==2){
        scene111122();}
    else{
        game_close();}
}

int scene111121(){
    printf("You go to Sigma AI and explain the robot about your problem. He says that he knows a solution but you need to beat him in a game.");
    int reply=choice("Press 1 to play the game.","Press 2 to if you think that game is dangerous.");
    if(reply==1){
        scene1111211();}
    else if(reply==2){
        scene1111212();}
    else{
        game_close();}
}

int scene1111211(){
    srand (time (NULL));
    printf("Welcome To Guess The Number.\nGet 3 points to win.\n");
    game_loop();
}

int scene1111212(){
    printf("The robot looks at you with an evil smile.<imagine creative painful death as the coder is out of ideas>\nTHE END");
}

int scene111122(){
    printf("You enter Youtube and get addicted to YTShorts and spend the rest of your lifetime scrolling though \"Moye-Moye\".I mean it is technically your fault for thinking that the AI is here.\nTHE END");
}

int scene1112(){
    printf("You ignore them and explore this new world by yourself. You walk around seeing all the cool cars and buildings. You feel like you are in air in this world. Turns out you are actually in air and falling cause you were distracted while walking and walk off the edge.\nTHE END");
}

int scene112(){
    printf("You open the strange file whih turns out to be a virus which infects your brain and you start having MEMORY LOSS.\n\nPress 1 to open a file that has a strange name.\n");
    int reply=scanf("%d",&reply);
    if(reply==1){
        line();
        scene112();}
    else{
        game_close();}
}

int scene12(){
    printf("Did you seriously choose to find a way to escape than to explore the computer? Don't be a loser and explore this world.");
        int reply=choice("Press 1 to go back and explore the computer world.","Press 2 to continue to find a way to escape.");
    if(reply==1){
        scene11();}
    else if(reply==2){
        scene122();}
    else{
        game_close();}
}

int scene122(){
    printf("You wander around the computer, but you can't find any other exit. You start to feel hungry, thirsty, and tired. You realize that you are trapped in the computer forever.\nTHE END");
}

int scene_end(){
    line();
    printf("You Win The Game!\nYou exit your way out of a glowing door which lands you in front of your computer.You live happily ever after and stop drinking coffee in front of computer which is easy as you stopped using computers.\nTHE END");
    exit(0);
}

int main(){
    intro();
    scene1();
}
