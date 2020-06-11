if __name__=='__main__':
	Dict={}
	for _ in range(int(input())):
		name=input()
		score=float(input())
		Dict.add(name,score)

	for i in sorted(Dict):
		print(i)