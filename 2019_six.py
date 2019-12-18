

def reader():
    with open("2019_six.txt") as fo:
        line = fo.readlines()

    dictionary = dict()

    list_orb = []

    for _ in line:
        orbital = _.strip().split(sep=")")
        list_orb.append(orbital)

    x = 0

    for i in list_orb:
        parent = i[0]
        child = i[1]
        if parent not in dictionary:
            dictionary[parent] = []
        value = dictionary[parent]
        value.append(child)

    limb = []

    key = 'COM'
    while 1:
        print(dictionary[key])
        key = dictionary[key][0]


reader()