def City(city, country):
    infor = city + ',' + country
    return infor.title()


def City1(city, country, population):
    infor1 = city + ',' + country + ' -- population ' + population
    return infor1.title()


def City2(city, country, population=''):
    if population:
        infor1 = city + ',' + country + ' -- population ' + population
    else:
        infor1 = city + ',' + country

    return infor1.title()
