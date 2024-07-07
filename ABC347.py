#==========================================================
# [contest name]	ABC347
# [question]		B
# [title]			Substring
# [language]		Python
# [result]			AC/TLE/WA
# [comment]			SHAKYO
# [learned]			xxxx
#==========================================================

#def main():
#	S = input()
#	unique_s = set()
#
#	for i in range(len(S)):
#		# for range(start, stop)はstartから"stop-1"までの範囲なの注意
#		for j in range(i + 1, len(S) + 1):
#			# pythonのスライスも、最後の引数は含まれないことに注意
#			# イメージは、i番目j番目の文字の前に仕切りを入れてるイメージ
#			unique_s.add(S[i:j])
#
#	print(len(unique_s))
#
#
#if __name__ == "__main__":
#	main()


#==========================================================
# [contest name]	ABC347
# [question]		C
# [title]			Ideal Holidays
# [language]		Python
# [result]			TLE
# [comment]			3重ループはセンスなさすぎました。すいません。
# [learned]			xxxx
#==========================================================

#def main():
#	N, A, B = map(int, input().split())
#	D = list(map(int, input().split()))
#
#	# 今日が何日かわからんならD1は1日目として考えりゃいいのに、なんか浅いひっかけだな
#	# D1が休みの1日目、2日目、3日目...と置いたときに、
#	# すべての予定が休みに該当しているかチェック
#
#	# D1が休みの1日目、2日目、3日目...でループして他の予定チェック
#	for i in range(A):
#		# D1は休み確定なので除外
#		flaglist = [0] * (N - 1)
#		for j in range(1, N):
#			flag = 0
#			# python、変数の型宣言がないので、/が浮動小数店
#			# //が整数切り捨てになるのか。。。
#			for k in range(A):
#				# D1がいる連続した休みの各日との差分が(A+B)で割り切れれば休み
#				d = D[j] - (D[0] - i + k)
#				if d % (A + B) == 0:
#					flag = 1
#
#			if flag == 1:
#				flaglist[j - 1] = 1
#
#		if sum(flaglist) == N - 1:
#			print("Yes")
#			exit()
#
#	print("No")
#
#
#if __name__ == "__main__":
#	main()


#==========================================================
# [contest name]	ABC347
# [question]		C
# [title]			Ideal Holidays
# [language]		Python
# [result]			xxxx
# [comment]			SHAKYO
# [learned]			xxxx
#==========================================================

def main():
	N, A, B = map(int, input().split())
	D = list(map(int, input().split()))

	# 重複を許さないためのset
	s = set()
	for i in D:
		# setに追加するときはadd（リストに追加するときはappend）
		s.add(i % (A + B))
	# setはソートできないので、リストに変換してソート
	s_list = sorted(s)
	print("s_list 1st:", s_list)
	# 末尾に最大値となる、初日の一週間(A + B)後の日にちを追加
	# ★この時点で、s_listに含まれるもので1週間以上離れたものはとりあえずない
	s_list.append(s_list[0] + (A + B))
	print("s_list 2nd:", s_list)

	for i in range(len(s_list) - 1):
		print("s_list[i + 1] - s_list[i]", s_list[i + 1] - s_list[i])
		# 平日B日間をすっ飛ばして次の休日にいけばOK
		# なのはわかるんだが、なぜ一つでも該当すればyesになるんや...
		# 確かに例1の
		#3 2 5
		#1 2 9
		# だと、s_listが(1, 2, 8)になってYesになるのはわかる
		# これが(1, 3, 8)だと、確かに土日の2日に収まらないからNo
		# ただ、その判定が、"平日をすっ飛ばす組み合わせが1つでもあればYes"がわからん
		# だってs_listが(1,2)だとNoになるが、それを防ぐために末尾にappendしてるのか

		# あ、少しわかってきたわ。s_listが必ず休日の最終日で始まって
		# 次の休日の初日で終わる一週間と仮定すると
		# そもそも平日に一日でも入ってると、"★平日以上の間隔が存在しなくなる"
		# だから、平日をすっ飛ばす組み合わせが1つでもあればYesになるのか
		# (数直線みたいなイラスト描くとわかりやすいかも)
		# どちらかというと逆説的な導出の仕方だな
		if s_list[i + 1] - s_list[i] > B:
			print("Yes")
			exit()

	print("No")


if __name__ == "__main__":
	main()

