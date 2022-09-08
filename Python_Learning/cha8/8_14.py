# shift + alt + -> 可以选中整个单词
def cars(manufacturer, model, **carinformation):
    carsinfor = {}
    carsinfor['manufacturer'] = manufacturer
    carsinfor['model'] = model
    for key, value in carinformation.items():
        carsinfor[key] = value
    return carsinfor


car = cars('qqq', 'www', color='bule', tow_package=True)
print(car)
