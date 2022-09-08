def city_country(name, country):
    re = name.title() + ',' + country.title()
    return re


message = city_country('nanjin', 'China')
print(message)
