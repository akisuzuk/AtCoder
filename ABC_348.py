#==========================================================
# [contest name]	ABC348
# [question]		D
# [title]			Medicines on Grid
# [language]		Python
# [result]			AC/TLE/WA
# [comment]			SHAKYO
# [learned]			xxxx
#==========================================================

from heapq import heappop, heappush

def main():
	H, W = list(map(int, input().split()))
	# list comprehensions内包表記
	# 空白で区切られていないことに注意(split使わない)
	A = [list(input()) for _ in range(H)]

	for i in range(H):
		for j in range(W):
			#pythonってダブルクォートとシングルクォートどっちでもいいのか
			if A[i][j] = 'S':
				sy, sx = i, j
			if A[i][j] = 'T':
				gy, gx = i, j

	N = int(input())
	#---In Progress---
if __name__ == "__main__":
	main()
