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

#plt.plot(x,y,'ro-',color='blue')

#plt.savefig('testblueline.jpg')


rg = np.random.default_rng(1)
mu, sigma = 2, 0.5
v = rg.normal(mu, sigma, 10000)
plt.hist(v, bins=50, density=1)
(n, bins) = np.histogram(v, bins=50, density=True)
plt.clear()
plt.plot(.5*(bins[1:]+bins[:-1]),n)
plt.savefig('hist.jpg')

print('bye, gushi')
