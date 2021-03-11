import turtle
a=turtle.Turtle()
a.showturtle()
a.speed()
#sides=5
def shape(size,sides):
    for i in range(sides):
        a.fd(size)
        a.left(360/sides)
for i in range(100):
    shape(3*i,i)
    a.left(i)