#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri May 20 09:20:00 2022

@author: michaelconnors
"""

import random

print("Welcome to the math game!")
print("Type in the answer to the question.")

correct = 0
incorrect = 0
total = 0

while True:

    num1 = random.randint(1, 10)
    num2 = random.randint(1, 10)
    ans = int(num1) + int(num2)
    print(f"  {num1}\n+ {num2}")
    print("------")
    player_ans = int(input())

    if player_ans == ans:
            print("Correct!")
            correct = correct + 1
            total = total + 1

                
    elif player_ans != ans:
            print("Sorry, that is incorrect.")
            incorrect = incorrect + 1
            total = total +1

            
    play_again = input("Play again? y or n")
    if play_again != "y":
        break

print("Great job!")
print(f"Total rounds played: {total}")
print(f"Total correct: {correct}")
print(f"Total incorrect: {incorrect}")
print("Thanks for playing!")
        
        
    

