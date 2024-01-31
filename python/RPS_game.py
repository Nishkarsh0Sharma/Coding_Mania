import random
rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

#Write your code below this line 👇
game_images =[rock,paper,scissors] 
user_input=int(input("What do you choose ? Type 0 for Rock, 1 for paper or 2 for scissors ."))

if user_input >= 3 or user_input < 0:
  print("You typed an invalid number, you lose!")
else:
  print(game_images[user_input])
  
  Computer_chose=random.randint(0,2)
  print(f"Computer chose {Computer_chose}")
  print(game_images[Computer_chose])
  
  
  if user_input == 0 and Computer_chose == 2 :
    print("You win!")
  elif user_input == 2  and Computer_chose == 0:
    print("You loose")
  elif Computer_chose > user_input:
    print("You losse")
  elif user_input > Computer_chose :
    print("You win!")
  elif Computer_chose == user_input:
    print("It's draw")
  
  
  
  