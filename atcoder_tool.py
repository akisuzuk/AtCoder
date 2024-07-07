#---package impot---

from typing import ForwardRef
import numpy as np
from abc import abstractmethod      #抽象基底クラス←←とは？？？
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import axes3d
from mpl_toolkits.mplot3d import Axes3D
import matplotlib.animation as animation
#from matplotlib.animation import AVConvFileWriter, PillowWriter
from matplotlib.animation import ArtistAnimation
from abc import ABC
#from typing_extensions import Concatenate
import random
import math
import datetime
import time
from heapq import heappush, heappop, heapify, heapreplace
import sys
import itertools

#============================
# 基本入力まとめ
#============================

# 1行n文字
#a,b,c = input().split()  #3個の文字列の入力を受け取る
#str_list = list(input().split())  # n個の文字列がリストに格納される

# 1行n数字
#a,b,c = map(int, input().split())  # 3個の数字の入力を受け取る
#num_list = list(map(int, input().split()))  # n個の数字がリストに格納される


# n行1文字
#n = int(input())  # nは入力回数
#str_list = [input() for _ in range(n)]

# n行1数字
#n = int(input())  # nは入力回数
#num_list = [int(input()) for _ in range(n)]    #ループ変数を_にするとただのループのカウンターで計算には使わないことを慣習的に示す


# n行n文字
#n = int(input())  # nは入力回数
#str_list = []
#for i in range(n):
#    str_list.append(list(input().split()))

# n行n文字(内包表記)
#n = int(input())  # nは入力回数
#str_list = [list(input().split()) for _ in range(n)]

# n行n数字
#n = int(input())  # nは入力回数
#num_list = []
#for i in range(n):
#    num_list.append(list(map(int,input().split())))
#print(num_list)

# n行n数字(内包表記)
#n = int(input())  # nは入力回数
#num_list = [list(map(int, input().split())) for _ in range(n)]
#print(num_list)

# n行n文字を縦に格納
"""
N = int(input())
T = []
X = []
Y = []
for i in range(N):      #中継地、x、yで別々にリスト作るのか...
    t,x,y = map(int, input().split(' '))
    T.append(t)
    X.append(x)
    Y.append(y)
"""
#----------------------
# 大量に入力する場合
#----------------------
"""
import sys
import itertools
import numpy as np

read = sys.stdin.buffer.read
#標準入力から複数行取得するための関数です。 readlines() が結果を行単位で分割してリストで返すのに対して、 read() は結果をそのまま1つの文字列として取得します。
readline = sys.stdin.buffer.readline
#標準入力から1行取得するための関数です。
readlines = sys.stdin.buffer.readlines
#標準入力から複数行取得するための関数です。戻り値はリストで、入力された文字列が1行ずつ要素として格納されています。
# .bufferはbytes を返すのでさらに少しだけ速いようですが、あまり差はありません。

# ↑↑↑★★この入力入れても計算進まなかったら、クエリ全部入れたらCtrl+z→Enter入れると入力完了して次の処理に進む 


# ↓↓ いちいちsys.stidinを書くのめんどいので上記みたいにまとめて、
# ↓↓ 下記みたいにシンプルに使う

#　標準入力例
# 3 4 3
# 1 3 3 100
# 1 2 2 10
# 2 3 2 10

N, M, Q = map(int, readline().split())
print(N, M, Q)
# 3 4 3

# 数値のNumPy配列(N×M)として入力したい場合 npを外せばリストになる。
# 文字列はbytes型なので'b""'が付く。結合等出来ないのでread定義からbufferを外した方が良い。
# input()と併用は避ける。
A = np.array(list(map(int, read().split()))).reshape((N, M))
# 下記と同型のNumPy配列を取得

m = map(int, read().split())
#print(list(m))
# <map object at 0x7f78f13a7d30> [1, 3, 3, 100, 1, 2, 2, 10, 2, 3, 2, 10]

for a,b,c,d in zip(m,m,m,m): # 複数のイテラブルオブジェクト（リストやタプルなど）の要素をまとめる関数
  print(a,b,c,d)
# 1 3 3 100
# 1 2 2 10
# 2 3 2 10
"""


#---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---

#==========================================================
# [contest name]    ABCxxx
# [question]        B
# [title]           xxxx
# [language]        python
# [result]          AC/TLE/WA
# [comment]         xxxx
# [learned]         xxxx               
#==========================================================
"""
def main():
    print("Hello, World!")


if __name__ == "__main__":
    main()
"""
#---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---TEMPLATE---


#==========================================================
# [contest name]    ABC184
# [question]        A
# [title]           Determinant
# [language]        python
# [result]          AC/TLE/WA
# [comment]         xxxx
# [learned]         xxxx               
#==========================================================

"""
def main():
    a, b = map(int, input().split())
    c, d = map(int, input().split())

    ans = a*d-b*c

    print(ans)


if __name__ == "__main__":
    main()
"""


#==========================================================
# [contest name]    ABC184
# [question]        B
# [title]           Quizzes
# [language]        python
# [result]          AC/TLE/WA
# [comment]         xxxx
# [learned]         xxxx               
#===========================================================


def main():
    N, X = map(int, input().split())
    S = input()

    for i in range(N):
        if(S[i]=="o"):
            X += 1
        else:
            if(X>0):
                X -= 1
    
    print(X)


if __name__ == "__main__":
    main()