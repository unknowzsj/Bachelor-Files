import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import sklearn.linear_model


# lode the data
oecd_bil = pd.read_csv("oced_bli_2020.csv", thousands=',')
gdp_per_capita = pd.read_csv("gdp_per_capita.csv", thousands=',', delimiter='\t', encoding='latin1', na_values='n/a')

# prepare the data
country_stats = prepare_country_stats(oecd_bil, gdp_per_capita)  # 数据未输入
X = np.c_[country_stats["GDP per capita"]]
y = np.c_[country_stats["Life satisfaction"]]

# Visualize the data
country_stats.plot(kind='scatter', x="GDP per capita", y='Life satisfaction')
plt.show()

# Select a linear model
model = sklearn.linear_model.LinearRegression()

# Train the model
model.fit(X, y)

# Make a prediction for Cyprus
X_new = [[22587]]  # Cyprus's GDP per capita
print(model.predict(X_new))  # outputs [[ 5.96242338]]
