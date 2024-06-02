#==========================================================
# [contest name]	ABC348
# [question]		D
# [title]			Medicines on Grid
# [language]		Python
# [result]			AC/TLE/WA
# [comment]			SHAKYO
# [learned]			xxxx
#==========================================================

#from heapq import heappop, heappush
#
#def main():
#	H, W = list(map(int, input().split()))
#	# list comprehensions内包表記
#	# 空白で区切られていないことに注意(split使わない)
#	A = [list(input()) for _ in range(H)]
#
#	for i in range(H):
#		for j in range(W):
#			#pythonってダブルクォートとシングルクォートどっちでもいいのか
#			if A[i][j] == 'S':
#				sy, sx = i, j
#			if A[i][j] == 'T':
#				ty, tx = i, j
#
#	N = int(input())
#	# 空のリストつくる。ここでは格納しない
#	D = [[0] * W for _ in range(H)]
#	for _ in range(N):
#		R, C, E = list(map(int , input().split()))
#		# ここで薬の情報を格納。複数ある可能性もあったのでD生成時に格納せず、
#		# ここでmaxで処理するようにしたんですね
#		D[R - 1][C - 1] = max(D[R - 1][C - 1], E)
#
#	E = [[-1] * W for _ in range(H)]
#	E[sy][sy] = 0
#	# プレイヤーの現在のエネルギーと座標管理用リスト。heapを使うため名前はhq
#	# ★Dをマイナスで管理するのは、heapqが最小値を取り出すため
#	# 標準的なpythonのヒープは最小ヒープであり、最小値を先頭に持ってきて取り出す
#	# よって、最大値を取得したい場合は負の値にして操作する。
#	hq = [(-D[sy][sx], sy, sx)]
#	# 動き方のコマンドをリスト化
#	moves = [[1, 0], [-1, 0], [0, 1], [0, -1]]
#
#	while hq:
#		# 最小値の取り出し。取り出した後の要素は削除される
#		# 最小値を判定するキーは、エネルギー
#		e, x, y = heappop(hq)
#		e *= -1
#		# エネルギー尽きたら終了
#		if e < E[y][x]:
#			continue
#		if e == 0:
#			continue
#
#		for dy, dx in moves:
#			# コマンドの移動を一つづつ試す。
#			# next_y, next_x
#			ny, nx = y + dy, x + dx
#			# マイナスとかおかしなところに飛んだらスキップ
#			if ny < 0 or ny >= H or nx < 0 or nx >= W:
#				continue
#			# 壁に当たったらスキップ
#			if A[ny][nx] == '#':
#				continue
#			# 移動した先の自分のエネルギーと、置いてある薬のエネルギーを比較
#			# エネルギーが大きくなる方を選択
#			ne = max(e - 1, D[ny][nx])
#			# まだ未開の地だったら、エネルギーを更新して、次の移動先をheapに追加
#			# 基本的に同じマスを何度も通ることはないので、一マスにつき一回だけ更新されるはず
#			if ne > E[ny][nx]:
#				E[ny][nx] = ne
#				heappush(hq, (-ne, ny, nx))
#
#	if E[ty][tx] == -1:
#		print('No')
#	else:
#		print('Yes')
#
#if __name__ == "__main__":
#	main()
#
