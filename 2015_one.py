def read ():

	array = []
	
	f = open("2015_one.txt", "r")

	while True:

		floorDirections = f.read(1)
		#http://www.java2s.com/Code/Python/File/Openafileandreadcharbychar.htm
		array.append(floorDirections)

		if not floorDirections:
			break


	#print(array)

	calculate(array)



def calculate (array):
# This was the problem. Dont need to pass in a pointer.
	count = 0 
	x = 0
	
	for i in array:
		
		if array[x] == "(":
			count += 1
			x += 1

		else: 
			count -= 1
			x += 1

# something must be going wrong here. It seems like theres only one item in array? I cant see any other reason

	print(count)



read()
