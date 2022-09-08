resort = {}
nametips = "what's your name:  "
placetips = "where do you want to go for your vacation: "
outtips = "anyone else? enter 'q' to leave, others to countinue:  "
active = True

while active:
    name = input(nametips)
    place = input(placetips)
    resort[name] = place

    out = input(outtips)
    if out == 'q':
        active = False
    else:
        print("welcome the next one")

print(resort)
