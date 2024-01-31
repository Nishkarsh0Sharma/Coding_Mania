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
import random 
user_input=int(input("What do you choose ? Type 0 for Rock, 1 for paper or 2 for scissors ."))
Computer_chose=random.randint(0,2)
print(f"Computer chose {Computer_chose}")

if user_input==0 and Computer_chose==2:
  print("You win")
elif Computer_chose > user_input :
  print("Computer wins")
elif Computer_chose == user_input :
  print("It's a draw")
elif user_input > Computer_chose:
  print("You wins")
else:
  print("You typed an invalid number, you lose!")
  
  
  