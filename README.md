# Command Quest - RPG Terminal Game

 
 > Authors: [Sujith Sanniboyina](https://github.com/Sujith-Sanniboyina),
[Tareq Hassan](https://github.com/thass004),
[Jay Muthyala](https://github.com/cbearsl72),
[Arya Bhattacharjee](https://github.com/abhat090),
[Aditya Paluri](https://github.com/apalu003)

## Project Description
We want to make an terminal based RPG game. We find this interesting because we all love playing video games and have a keen interest in developing one from the ground up. The game consists of a simple gameplay loop that can be easily expanded upon and plays in the following way:

1. You start with a hand of cards, these will have different actions such as attack, defend, heal, etc.
2. The 'player' will pick a card to play in the form of typing in a command to terminal, against an AI (psuedo-random) 'monster'.
3. Based on the card selected, the player will either attack the monster, set up a defense, or heal. These commands can be stacked on top of each other in order to perform different actions.
4. After the player's action has concluded, the AI moster will select a psuedo random move from a bank of options, and play that move.
5. This gameplay loop will continue, with the possibility of some random events to vary the gameplay.
6. If the player manages to defeat the monster, the monster will 'drop' new cards which the player collects, and uses in the next battle, the game then continues to the next monster.
7. If the player loses, or runs out of cards, the game ends, and the player score is displayed as the number of monsters that have been defeated.

 The monsters and the cards will get more powerful as the game continues, with new cards being unlocked later on in the game
 Additional features include element dynamics, with weaknesses and strengths

The game will be developed within C++, where the only libraries we plan to use are the basic stdlib.h as well as iostream, in order to handle our console input and output. We may consider using a Time library to control output as well.

The input will primarily consist of text based commands that the user will give to the terminal. On the home screen, similar to terminal applications we've built in the past, the user will select the letter and press enter in regards to the menu item that they would like to select. However once the user is in game, the primary input will be in the form of 'commands' which are the way in which the player will use the cards given to them.

Output from the game will mostly consist of the screens displayed below, where the enemy will have random voicelines and/or text that describes their emotions towards you. After your input (your move), the enemy will then themselves attack back using a similar set of moves that are available to you. Screens such as the menu screen and game-over screen are simply static text.

## Class Diagram
This UML diagram shows the design of our RPG card game. It consists of multple primary classes: Card, Player, Enemy, Input, and Output, as well as many subclasses such as Card:Attack or Card:Type. Cards can be Attack, Heal, Type or Defense cards. Players and enemies can have a list of cards associated with them that can do either Attack, Heal or Defense. The diagram also shows how a user interacts with the game, starting at the terminal and getting a set of cards to perform actions on other enemies. (NEEDS TO BE UPDATED)

![Class Diagram](https://github.com/cs100/final-project-jmuth004-ssan003-abhat090-thass004/assets/137970302/6ec50141-ffb8-4a5a-8853-74bfb1898d08)

## Navigation Diagram
![Navigation Diagram](https://github.com/cs100/final-project-jmuth004-ssan003-abhat090-thass004/assets/137970302/214a4d29-1f57-41ec-9867-8c87a4fb0708)

This navigation diagram shows the way in which each screen of our game is connected, and how each screen is accessed. The game-over screen is exited automatically after 5 seconds.

## Screen Layout

### Main Menu

```
Welcome in! What would you like to do?
DO -> DEATH
DO -> DEATH
DO -> DEATH
COL -> Look at your Collection
NAME -> Set Name
DONT -> Quit
----------------CMDQST----------------
enter PLEASE: then the CMD (PLEASE:DO)
--------------------------------------
CMD >>
```

First three options start the game, other two are self-explanatory. Option D may not be implemented

### Gameplay

```
---------------------------------------------------CMDQST
PLAYER --- HP:30+(20) | Minotaur --- HP:50                              <---- player health and enemy health

Grrr~ <<                                                           <---- character voicelines and behavior
The Minotaur doesn't seem too frigtened by you

------------------CARDS----------------------------------          <---- cmd options
Attack  - A       | BSC x4, LGND x1
Defend  - D       | LGHT x1, HVY x1, CLSL x1
Heal    - H       | fruit x4, ptn30 x2, ptn80 x1
Type    - T       | fire x2, water x2
---------------------------------------------------------
Your CMD >> 
```
Example input in this screen would be `PLEASE:A LGND -T fire` which would attack the cat with legendary power, using a fire element.
`please:dont` will go to Give Up? screen. (not case sensitive). Forgetting to type please will penalize you by voiding your attack and damaging you by 1%.

```
PLAYER <<
 Attack - 30
 Basic - x0.5
 TYPE:FIRE
 Weakness - x2

DMG DEALT = 30
Minotaur --- HP:20

```
Screen that appears after you attack, lines appear one by one (not all at once, for suspense). Details entire attack sequence.
If enemy isn't defeated after this then enemy attacks you.

```
Minotaur <<
 Defend - 20
 Heavy - x1

ARMORED = +20
Minotaur --- HP:20+(20)
```
Enemy attack screen, shows enemies move process if not defeated after player moves.

### Give Up
```
---------------------------------------------------CMDQST


PLAYER --- HP:30 | Minotaur --- HP:50
ARE YOU SURE YOU WANT TO GIVE UP? DO/DONT

PROGRESS IS NOT SAVED

---------------------------------------------------------
GIVE UP? >>
```
Input in this screen is simply `PLEASE:do` or simply `do`/`dont` (please keyword isn't necessary)

### Game over
```
GAME_OVER <<
```
Fairly simple game over screen, but will be locked to this screen for ~5 seconds until you are returned back to menu

### Victory
> For one round (there is no "victory" in this game, keep going until you give up or lose)
```
---------------------------------------------------CMDQST

ROUND3 | VICTORY | Defeated Minotaur in 5 turns
---------------------------------------------------------
Cards Obtained:
Basic x3, Rare x1
Colossal x1
-
fire x1

Keep going? DO/DONT
---------------------------------------------------------
CONTINUE? >>

```
Input in this screen is also simply `PLEASE:do` or simply `do`/`dont` (please keyword isn't necessary). Dont counts as a quit/game-over.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).

## Phase 2
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` (aka Sprint Backlog) column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots on Tuesday of week 6. The check-ins will occur on Zoom. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
