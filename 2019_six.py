
def reader():
    with open("2019_six.txt") as fo:
        line = fo.readlines()
    dictionary = dict()
    for _ in line:
        orbital = _.split(sep=")")
        dictionary[orbital[0]] = orbital[1]
        #https://stackoverflow.com/questions/26263682/python-add-to-dictionary-loop


reader()