Contributors:

    Wong Zee Meng 

    Deng Wanting

A description of your game and introduce the game rules.

    (1). Description:

    Our project is going to implement a Life Simulation. In this game, players can determine the role’s life by making choices. From family to career, from entertainment to life long learning, players can live a unique life in every turn.

    (2). Game rule:

    -Phase 0: Players can choose the name and gender for the role {we could generate two pictures for each gender so players can choose the outlook}

    -Phase 1 Baby (0 years old-6 years old)

    Players may have these series of actions

    [One action/year]

    Playing with other children (social skills += 5-10)

    Watching TV (Curiosity += 10)

    Reading (intelligence += 5-10)


    -Phase 2 Primary School (6 years old - 12 years old) Going to the kindergarten 

    [One action/year]

    Cultivating a hobby (such as singing, dancing, etc.) (Artistic sense += 5)

    Playing with other children (social skills += 5-10)

    Reading (intelligence += 5-10)
    
    Playing_computer (Academic_performance -= random(5, 10), Intelligence += random(0-5))
    
    Watching TV (Curiosity += 10, Academic_performance += 5-10)
    
    if academic_performance<-10, "Playing_computer" and "Watching_TV" can not be chosed.
    
    -Phase 3 Junior High School & High School (12 years old - 18 years old) 

    [One action/year]

    Studying (academic performance += 15-20)

    Reading (intelligence += 10-15)

    Writing (Artistic sense += 10)

    Playing with classmates (social skills += 5-10)

    -Phase 4(18 years old - 22 years old) 

    If Academic performance >= 100 -> Top University (IBGM/MBBS)

    If Academic performance >= 80 -> Top University (Social Science/Arts/Science)

    If Academic performance >= 50 -> Normal University

    If Academic performance <50 -> Directly turn Phase 5

    [Twice actions/year]

    Studying (Academic performance +=10-20)

    Internship (Competitiveness +=10)

    Competition (Competitiveness +=5, Intelligence += 10)

    Joining activities (Social Skills += 10-15）

    -Phase 5 (22 years old-）

    After graduation(Career)

    If Academic performance >= 200 && intelligence >= 60 -> Ph.D

    If Academic performance >= 150 && intelligence >= 40 -> MA

    If Social Skills >=50 -> Insurance Sales

    If Social Skills >=50 && Competitiveness >=40 && Academic performance >=160-> Investment banking front office

    If intelligence >=50 && Academic performance >=100 -> Programming

    If Curiosity =10 && intelligence >=40 -> Online Game Design

    …

    Else: choose from

    Waiter/Waitress

    Artist

    Writer

    …

    The following activities will be generated from 22 years old to 60 years old

    (Family) [A potential partner can be met randomly, i.e. Probability 0.2 every year] 

    -> Getting married 

    -> Children [RANDOM jobs]

   (Job)
    -> Work

    -> Being promoted

    -> Gain Money

    (Money usage)

   -> Entertainment

   -> Shopping

   (Life long study)

   -> Ph.D

   -> Second degree

    END

    Players are able to view their achievements, career, name of partner

    i.e.Values will be turned into text based achievements


3. Features:

    Appearance of the role

    -(5) Images are stored in different files

    -(1) Random images

    Game menu

    Save (Saving the game status):

    -(2) Data Structure for storing game status

    -(3) Dynamic memory allocation

    -(4) Outputting the data of game status to files

    Load (Loading the game):

    -(4) Inputting the data of game status from files

    Restart (Clearing the character’s status and restarting the game):

    -(2) The data structure of game status being changed

    Activities

    -(5) Random events may occur (such as finding the partner)

    -(5) Players will gain random values in some actions

    -(2) Changes in value will be recorded in data structure

4. non-standard C/C++ libraries

    To construct a ramdom function, we include :
    <stdio.h>
    <stdlib.h>
    <time.h>

5. Compilation and execution instructions
    Open the terminal in the folder 
    -> type "make start" 
    -> type "./ start"
    then follow the printed game instructions, we can play the game.
    
    
    
