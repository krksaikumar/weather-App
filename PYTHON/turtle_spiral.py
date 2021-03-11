import turtle
a=turtle.Turtle()
a.speed()
def circle(side):
    for i in range(50):
        a.fd(side)
        a.left(360/50)
for i in range(100):
    circle(i)
    a.left(i+10)