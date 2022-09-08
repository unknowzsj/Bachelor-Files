# 包导入
import tensorflow as tf
import keras

# CNN模块创建
udn_model = keras.models.Sequential([
    tf.keras.layers.Conv2D(128, 2, activation="relu", padding="same",
                           input_shape=[28, 28, 1]),
    keras.layers.Conv2D(64, 2, activation="relu", padding="same"),
    keras.layers.Conv2D(32, 2, activation="relu", padding="same"),
    keras.layers.Conv2D(32, 2, activation="relu", padding="same"),
    keras.layers.MaxPool2D(2),
    keras.layers.Conv2D(16, 2, activation="relu", padding="same"),
    keras.layers.Flatten(),
    keras.layers.Dense(128, activation="relu"),
    keras.layers.Dropout(0.5),
    keras.layers.Dense(1, activation="relu")
])
