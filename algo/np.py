#!/usr/bin/env python

print('hello, gushi')

import numpy as np

print('load numpy:', np.__version__)

# Quickstart
print('Quickstart ...')

a = np.arange(15)
print(a)
a = a.reshape(3,5)
print(a)
print(a.shape)
a = a.reshape(5,3)
print(a, a.shape, a.ndim, a.dtype.name, a.itemsize, a.size)
print(type(a))

b = np.array([6, 7, 8])
print(type(b))

c = np.zeros((3, 4))
print(c, c.shape)

# Tutorials
print('Tutorials ...')


# Data visialization

import matplotlib.pyplot as plt

x=[1,2,3,4,5]

y=[10,5,15,10,20]

plt.plot(x,y,'ro-',color='blue')

plt.savefig('testblueline.jpg')

print('bye, gushi')
