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



def calculate (*array):

	count = 0 

	for i in array:
		if i == "(": count = (count + 1)
		else: count = (count - 1)
		print(count)

read()
