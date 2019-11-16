import turtle
import random
nina = turtle.Turtle()
text = turtle.Turtle()
nina.shape('circle')
nina.speed(4.5)
text.hideturtle()


#outside circle
nina.penup()
nina.begin_fill()
nina.color('black')
nina.goto(0,-185.5)
nina.pendown()
nina.circle(177)
nina.end_fill()

#inside circle
nina.penup()
nina.begin_fill()
nina.color('blue')
nina.goto(-1,-160)
nina.pendown()
nina.circle(151)
nina.end_fill()
nina.penup()

#triangle
nina.goto(120,60)
nina.pendown()
nina.color('black')
for i in [1,2,3]:
  nina.back(245) #pirameter
  nina.left(120)
  nina.hideturtle()
  
M8BRlist = ['It is certain','hmmm...I dont | know that one', 'Maybe',
'Very Doubthful', 'I mean I guess', 'As I see it,yes', 'Outlook good',
'You may rely on it', 'Without a doubt', 
'I am on a seafood diet. | I see food,|...|and I eat it']

#for i in M8BRlist:
#turtle.speed()
screen =turtle.Screen()
def clicky(x,y):
  text.goto(0,0)
  text.clear()
  text.penup()
  text.goto(-97,30)
  text.color('white')
  
  lines = random.choice(M8BRlist).split('|')
  #print(len(lines))
  i = 0
  xx = -30
  yy = -20
  while i < len(lines):
    text.write(lines[i], font=('Arial', 12))
    text.goto(xx,yy)
    i += 1
    yy -= 30
    
    #text.onclick(reveal())
  #text.write(random.choice(M8BRlist),font=('Arial', 15))

screen.onclick(clicky)
#text.write(M8BRlist[0],font = ('Arial', 11 ))
  #from turtle import*
#wn = Screen()
#nina = Turtle()
# repeat 3 times
#wn.extentionclic()
