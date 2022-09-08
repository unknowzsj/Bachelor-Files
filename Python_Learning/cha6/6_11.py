cities = {
    'nanjin': {
        'country': 'China',
        'fact': 'nice place',
        },

    'anhui': {
        'country': 'China',
        'fact': 'place of geniue',
        },

    'shanghai': {
        'country': 'China',
        'fact': 'the biggest city in China',
        },
    }

for city, fact in cities.items():
    print(city.title() + "'s information")
    for key, value in fact.items():
        print('  ' + key.title() + ':' + value)
