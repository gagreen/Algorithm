import math

def circleR(area):
    r = math.sqrt(area/3.14)
    return r


area = int(input(""))
print('%.2f'%(circleR(area)))