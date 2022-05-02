
def most_frequent():

    str_1 = str(input("Please input a string: "))
    d = dict()
    for key in str_1:
        if key not in d:
            d[key] = 1
        else:
            d[key] += 1
    return d

    print("Original Word:", d)

    sorted_d = dict( sorted (d.items(), key=operator.itemgetter(1), reverse=True))

    print('Dictionary in descending order is: ', sorted_d)

print(most_frequent())