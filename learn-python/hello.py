#!/usr/bin/env python

import numpy as np
import pandas as pd

print('hello, gushi');

#for i in range(10): print(i)

arr = np.arange(5)
print(arr)
arr = pd.Series(arr)
print(arr)

dic = {'x':26, 'y':27, 'z':38}
print(dic)
dic = pd.Series(dic)
print(dic)

#dataframe, search, drop,
#concat, merge, join

# Series
# DataFrame
data = {'state': ['Ohio', 'Ohio', 'Ohio', 'Nevada', 'Nevada', 'Nevada'],
        'year': [2000, 2001, 2002, 2001, 2002, 2003],
        'pop': [1.5, 1.7, 3.6, 2.4, 2.9, 3.2]}
df= pd.DataFrame(data)
print(df)

print(df.describe())

from scipy.optimize import leastsq
X = np.array([8.19, 2.72, 6.39, 8.71, 4.7, 2.66, 3.78])
Y = np.array([7.01, 2.78, 6.47, 6.71, 4.1, 4.23, 4.05])
print(X)
print(Y)
def f(p):
    k, b = p
    return(Y-(k*X+b))
r = leastsq(f, [1,0])
print(r)

print('bye, gushi');
