import random


people = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
roles={"usher":[], "choir":[], "cleaning":[], "benevolence":[]}
while len(people) > 0:
   a = random.choice(people)
   roles[random.choice(list(roles.keys()))].append(a)
   people.remove(a)

#    b = random.choice(people)
#    roles["choir"].append(b)
#    people.remove(b)

print(roles["usher"])

