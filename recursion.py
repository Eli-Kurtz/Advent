


def counter (letter, string, count):
	
	if not string:
		return count

	for i in string:
		if letter == i:
			count += 1
	print (count)


counter ("a", "appleaaaaaaasffdsgfsdfgss", 0)




