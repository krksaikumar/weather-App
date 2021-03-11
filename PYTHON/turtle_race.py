import random
import turtle
t=turtle.Turtle()
t.speed(0)
t.color("white")
t.goto(400,-700)
t.color("grey")
t.begin_fill()
t.fd(-820)
t.left(90)
t.fd(50)
t.right(90)
t.fd(820)
t.right(90)
t.fd(50)
t.end_fill()
t.right(90)
t.fd(450)
t.right(90)
t.fd(70)
t.right(90)
t.write("START")

w=turtle.Turtle()
w.fd(220)
w.fd(-480)
w.write("guess who is gonna win the race")

t1=turtle.Turtle()
t1.speed(5)
t1.color("white")
t1.goto(300,670)
t1.begin_fill()
t1.color("grey")
t1.fd(-660)
t1.left(90)
t1.fd(50)
t1.right(90)
t1.fd(720)
t1.right(90)
t1.fd(50)
t1.end_fill()
t1.right(90)
t1.fd(450)
t1.left(90)
t1.fd(60)
t1.left(90)
t1.write("FINISH")



a=turtle.Turtle()
a.shape("turtle")
a.color("white")
a.pensize(3)
a.goto(-150,-550)

b=turtle.Turtle()
b.shape("arrow")
b.color("white")
b.pensize(4)
b.goto(-50,-550)

c=turtle.Turtle()
c.shape("circle")
c.color("white")
c.pensize(3)
c.goto(50,-550)

d=turtle.Turtle()
d.shape("turtle")
d.color("white")
d.pensize(3)
d.goto(120,-550)

w.clear()
w.color("white")

a.color("red")
a.left(90)
b.color("yellow")
b.left(90)
c.color("cyan")
c.left(90)
d.color("blue")
d.left(90)



while True:
    a1=random.randint(5,25)
    b1=random.randint(5,25)
    c1=random.randint(5,25)
    d1=random.randint(5,25)
    
    a2=random.randint(1,3)
    b2=random.randint(1,3)
    c2=random.randint(1,3)
    d2=random.randint(1,3)
    
    a3=random.randint(1,3)
    b3=random.randint(1,3)
    c3=random.randint(1,3)
    d3=random.randint(1,3)
    
#    a21=a21+a2
#    
#    if a21< -10:
#        a2=a2+10
#    elif a21>10:
#        a2=a2-10:<
        
   
    
    a.fd(a1)
    a.left(a2)
    a.right(a3)
    
    b.fd(b1)
    b.left(b2)
    b.right(b3)
    
    c.fd(c1)
    c.left(c2)
    c.right(c3)
    
    d.fd(d1)
    d.left(d2)
    d.right(d3)
    













