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

		if array[x] == ")":
			count -= 1
			x += 1

		if count < 0:
			print(x)
# here is the bit of code that returns the pt. 2 answer. X is the numer when he enters the basement.
			break

# got the counting to work. However its not the right number. I think maybe there are characters being counter as -1 other than )s

	print(count)



read()
