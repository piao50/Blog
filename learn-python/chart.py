#!/usr/bin/env python

print("hello, gushi!")

import numpy as np
from matplotlib import pyplot as plt

x = np.arange(1,11)
y = 2 * x + 5

plt.plot(x,y)
plt.show()

print("bye, gushi.")