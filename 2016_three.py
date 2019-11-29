


def read (i):

	array = []	

	f = open("2016_three.txt", "r")

	triangle = f.readlines()
							#https://www.geeksforgeeks.org/reading-writing-text-files-python/
	array = triangle[i].split()		

	print(array)

	a = (array[2])
	b = (array[4])
	c = (array[6])

	total = int(a) + int(b) + int(c)

	a = int(a)
	b = int(b)
	c = int(c)

	print(total)
	
	count = 0

	if (a + b) > c and (b + c) > a and (c + a) > b:
		count = 1

	if count == 1:
		print("this is a triangle")

	print(count)

	read(i+1)

read (3)

