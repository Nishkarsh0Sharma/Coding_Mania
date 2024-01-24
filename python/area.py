'''class shape:
    def rectangle(self,'lenght','breadth'):
        self.length=length
        self.breadth=breadth
        self.area=length*breadth

    rectangle(2,2)
    print(f'the area of rectangle is{self.area}')'''

class rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

    def perimeter(self):
        return 2 * (self.width + self.height)

# Create a new rectangle object
rect = rectangle(10, 5)

# Print the area and perimeter of the rectangle
print(rect.area())
print(rect.perimeter())
