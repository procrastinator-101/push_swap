#!/usr/bin/python
import sys, random

def makelist(number):
  new_list = []
  for i in range(0, number):
    new_rand = random.randint(1, 100)
    new_list.append(new_rand)
  return new_list

def main():
  populated_list = makelist(100)
  for i in populated_list:
    print(str(i)),

main()
