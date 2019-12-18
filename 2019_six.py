
def branch(dictionary, key):

    limb = []
    print("the current key is ", key)

    while key in dictionary:
        limb.append(key)
        key = dictionary[key][0]

    # print(limb)

    return limb


def stem(dictionary):

    limb = []

    key = 'COM'

    # print("the value of key FH4 is ", dictionary['FH4'])

    # while key != 'FH4':
    while key in dictionary:
        # print(dictionary[key])
        if len(dictionary[key]) > 1:
            for i in range(len(dictionary[key])):
                print("this ran")
                # print(len(dictionary[key]))
                print("the input is ", dictionary[key])
                next_limb = (branch(dictionary, dictionary[key][i]))
                # print(limb.append(next_limb))
                print("the returned limb is ", next_limb)

            key = dictionary[key][0]
                # problem in here. not hitting the second key
                # I believe this problem is fixed

        else:
            limb.append(key)
            key = dictionary[key][0]
            # print(limb)

    print("limb is ", limb)


def reader():
    with open("2019_six.txt") as fo:
        line = fo.readlines()

    dictionary = dict()

    list_orb = []

    for _ in line:
        orbital = _.strip().split(sep=")")
        list_orb.append(orbital)

    for i in list_orb:
        parent = i[0]
        child = i[1]
        if parent not in dictionary:
            dictionary[parent] = []
        value = dictionary[parent]
        value.append(child)

    # print(dictionary['SLV'])

    stem(dictionary)


reader()