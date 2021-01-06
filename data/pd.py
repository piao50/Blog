#!/usr/bin/env python

print('hello, gushi!');

import pandas as pd
d = pd.Series([1,2,3,4,8,10])
d = pd.Series({'python':9000, 'c++':9001, 'c#':9000})
#d = pd.Series(d, index=['java','c++','c#'])
print(d)

i = 0
result = 0
while i <= 10:
    if i % 2 == 0:
        print(i)
        result += i
    i += 1
print('result:', result)
    
print('bye,gushi.');
