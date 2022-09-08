from sklearn.datasets import load_sample_image
import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt

china = load_sample_image("china.jpg")/255
flower = load_sample_image("flower.jpg")/255
images = np.array([china, flower])
batch_size, height, width, channels = images.shape

filters = np.zeros(shape=(7, 7, channels, 2), dtype=np.float32)
filters[:, 3, :, 0] = 1
filters[3, :, :, 1] = 1

output = tf.nn.conv2d(images, filters, strides=1, padding="SAME")

plt.imshow(output[0, :, :, 1], cmap="gray")
plt.show()
