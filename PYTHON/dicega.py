import random   
max_turns=int(input("how many players : "))
max_throws=int(input("how many times do you want to throw the dice : ")) 
list=[]
x=0
while x<max_turns:   
    total_score = 0
    i=0
    while i<max_throws:
        print("press any key and enter to roll the dice  :  ")
        a=input("")
        variable=random.uniform(1,7)
        score=int(variable)
        print("score : ",score)
        total_score +=score
        i+=1
    score_this_turn=total_score
    list.append(score_this_turn) 
    print("your total score is %s"%score_this_turn)
   
    
    x+=1
    if x<max_turns:
        print("your turn is over ")
        print("")
    elif x == max_turns :
        print("")
        print("                The game is over bye :)")
list.sort()
print(list[-1]," is the highest score")
