#!/usr/bin/env python


print("hello, gushi!")

import os.path
file = './spe/eu-152.spe'
if os.path.isfile(file):
    print("file %s found." % file)

    cnt = 0
    lt = 0.0
    rt = 0.0
    flag_mea = False
    mea = [0.0, 0.0]
    flag_len = False
    data_range = [0, 16383]
    flag_data = False
    idx = -1
    data = []
    for line in open(file):
        line = line.strip('\n')
        cnt = cnt + 1
#        if cnt > 40:
#            break
        if line.startswith('$MEAS_TIM:'):
            flag_mea = True
            continue
        if flag_mea:
            flag_mea = False
            mea = [float(val) for val in line.split()]
            print(mea)
            continue
        if line.startswith('$DATA:'):
            flag_len = True
            continue
        if flag_len:
            flag_len = False
            flag_data = True
            data_range = [int(val) for val in line.split()]
            idx = 0
            print(data_range)
            continue
        if flag_data and len(data_range) == 2:
            if idx > data_range[1]:
                print('Finished')
                flag_data = False
            else:
                #print('data(%d) %f' % (idx, float(line)))
                data.append(float(line))
                idx = idx + 1


    # data process
    print('data (%d) found!' % len(data))
    from matplotlib import pyplot as plt
    import math
    data1 = []
    for val in data:
        if val <= 0:
            data1.append(0)
        else:
            data1.append(math.log(val))
    # data = data1
    #plt.plot(data[0:1023])
    #plt.show()

    data = data[0:1023]
    
    import numpy as np
    from scipy.signal import find_peaks
    peaks, _ = find_peaks(data, distance=50)
    print(peaks)

    plt.plot(peaks, np.array(data)[peaks], 'xr')
    plt.plot(data)
    plt.show()

else:
    print("file %s NOT EXIST!")

print("bye, gushi.")
