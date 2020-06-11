if __name__=='__main__':
	n=int(input())
	arr=map(int,input().split())
	##this is the array of inputs separeted by space 
	#print(sorted(arr,reverse=True))
	##first converting the map into a set --> stores only unique values 

	set1=set() ##creates empty set
	for i in arr:
		set1.add(i)

	set1=sorted(set1,reverse=True) ##sorted and reversed it 
	#print(list(set1)[1])	
	print(list(set1)[1])
