import math

runnnig = "1"

while runnnig != "0":
    figure = input("rectangle(1) - square(2) - triangle(3) - circle(4) - regular polygon(5): ")
    # op = input("area:1 - perimeter:2 : ")
    # if op == "1":

    if figure == "1":
        print("You choose rectangle.")
        base = input("Enter the base of the rectangle: ")
        height = input("Enter the height of the rectangle: ")
        print("The area of the rectangle is: ", int(base) * int(height))
    elif figure == "2":
        print("You choose square.")
        side = input("Enter the side of the square: ")
        print("The area of the rectangle is: ", int(side)**2 )
    elif figure == "3":
        print("You choose triangle.")
        base = input("Enter the base of the triangle: ")
        height = input("Enter the height of the triangle: ")
        print("The area of the triangle is: ", (int(base) * int(height)) / 2)
    elif figure == "4":
        print("You choose circle.")
        radio = input("Enter the radio of the circle: ")
        print("The area of the circle is: ", math.pi * int(radio)**2)
    elif figure == "5":
        print("You choose regular polygon.")
        perimeter = input("Enter the perimeter of the regular polygon: ")
        radio = input("Enter the radio of the regular polygon: ")
        print("The area of the regular polygon is: ", (int(perimeter) * int(radio)) / 2)
    else:
        print("Your input is not on the option list")

    runnnig = input("open (1) - closed (0): ")

