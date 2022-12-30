#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    if s.find("AM")>0:
        pm=0
        s=s.replace("AM", "")
        ll=s.split(":")
        if int(ll[0])<12:
            return s
        
    else:
        s=s.replace("PM", "")
        pm=1
    l=s.split(":")
    a=int(l[0])
    if pm==1:
        if a==12 and int(l[1])<60 and int(l[2])<60:
            su=str(l[0])+":"+str(l[1])+":"+str(l[2])
            return su
    if a==12 and int(l[1])<60 and int(l[2])<60:
        a=12+int(l[0])
    elif a<12:
        a=12+int(l[0])
    if a==24 and int(l[1])<60 and int(l[2])<60:
        a="0"+"0"
    l[0]=a
    su=str(l[0])+":"+str(l[1])+":"+str(l[2])
    
        
    return su

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    print(result)

    
