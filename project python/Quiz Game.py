print("Welcome to my game")

playing = input("Do want to play? ")

if playing.lower() != "yes":
    quit()

print("Okay! Lets start playing")
score=0

answer = input("A binary operation ⊕⊕ on a set of integers is defined as x ⊕⊕ y = x2 + y2.")
if answer.lower() == "Commutative but not associative":
    print('Correct!')
    score += 1
else:
    print('Incorrect!')
    score -= 1
  
answer = input("The Miss Porters Network is a ")
if answer.lower() == "LAN":
    print('Correct!')
    score += 1
else:
    print('Incorrect!')
    score -= 1

answer = input("What allows multiple programs to run on a computer? ")
if answer.lower() == "OS":
    print('Correct!')
    score += 1
else:
    print('Incorrect!')
    score -= 1

answer = input("When was the world wide web invented? ")
if answer.lower() == "1989":
    print('Correct!')
    score += 1
else:
    print('Incorrect!')
    score -= 1

answer = input("Information that is broken down into small chunks before it is sent to another computer are called... ")
if answer.lower() == "Packets":
    print('Correct!')
    score += 1
else:
    print('Incorrect!')
    score -= 1

answer = input("What type of software is free to try but then you have to buy? ")
if answer.lower() == "Shareware":
    print('Correct!')
    score += 1
else:
    print('Incorrect!')
    score -= 1
print("You got " + str(score) + "questions correct")
print("You got " + str((score/6)*100) + "%.") 
    

    

