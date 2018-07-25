# -*- coding: utf-8 -*-
"""
Created on Jan 5 12:53:30 2018

implementation of the euclidean algorthim to find the
greatest common divisor between two integers.

@author: Aaron
"""

def gcd(a,b):
    """" Takes two integers a and b with the requirment that a>=b>0 and 
    returns the greatest common divisor between the two integers """
    if a >= b:
        if type(a)==int and type(b)==int:
            while True:
                r = a%b
                if r == 0:
                    return b
                else:
                    a = b
                    b = r
        else:
            raise TypeError
    else:
        raise ValueError
        
print(gcd(16,12))

def recursive_gcd(a,b):
    """" Takes two integers a and b with the requirment that a>=b>0 and 
    returns the greatest common divisor between the two integers """
    if a >= b:
        if type(a)==int and type(b)==int:
                if a%b == 0:
                    return b
                else:
                    return gcd(b, a%b)
        else:
            raise TypeError
    else:
        raise ValueError
        
print(recursive_gcd(125,20))
print('euclidean algorith program\n')
a = int(input("enter a positive integer: "))
b = int(input("\nenter a second positive integer: "))
try:
    print("\nGreatest common divisor of %d and %d is %d"%(a,b,gcd(a,b)))
except ValueError:
    print("please ensure the first number is greater than or equal to the second number\n")
except TypeError:
    print("inputs other than integers are not supported\n")
