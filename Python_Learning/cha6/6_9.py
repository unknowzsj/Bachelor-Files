favorite_place = {
    'qqq': ['q', 'w', 'e'],
    'aaa': ['a', 's', 'd'],
    'zzz': ['z', 'x', 'c'],
    }

for key, value in favorite_place.items():
    print(key + "'s favorite place is")
    for place in value:
        print(place)
