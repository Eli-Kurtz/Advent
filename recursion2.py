

def counter (c, s, accum):
	if not s:
		return accum
	
	if s.find(c) == -1:
		return accum

	else:
		yy = s.find(c)
		xx = s[yy + 1:]
		return counter (c, xx, accum + 1)
	

print(counter ("a", "applea", 0))
