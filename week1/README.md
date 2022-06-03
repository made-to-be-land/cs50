Let’s recreate that pyramid in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramid itself is also be taller than it is wide.

       #
      ##
     ###
    ####
   #####
  ######
 #######
########
The program we’ll write will be called mario. And let’s allow the user to decide just how tall the pyramid should be by first prompting them for a positive integer between, say, 1 and 8, inclusive.

Here’s how the program might work if the user inputs 8 when prompted:

$ ./mario
Height: 8
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
Here’s how the program might work if the user inputs 4 when prompted:

$ ./mario
Height: 4
   #
  ##
 ###
####
Here’s how the program might work if the user inputs 2 when prompted:

$ ./mario
Height: 2
 #
##
And here’s how the program might work if the user inputs 1 when prompted:

$ ./mario
Height: 1
#
If the user, when prompted, doesn’t input a positive integer between 1 and 8, inclusive, the program should re-prompt the user until they cooperate:

$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
   #
  ##
 ###
####
