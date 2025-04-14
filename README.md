# Task-1
A basic thought process of my 3 Arduino projects in Tinkercad
# Project 1- Environment monitor
- Ok so the easiest project that would came up in my mind, is an environment monitor. It was **very easy** to fabricate, the circuits were easy to plug in, and the coding was simple too. I previously have no experience with Tinker, Arduino, or it's IDE etc.,etc., but learning through these was fun.
- Anyways, to kick start, I chose to do a rather easy project, to understand the basic of Arduino, circuits, Tinkercad and stuff.
- I already know how to wire in breadboard, buy wiring it with the electrical components was new to me, I had researched my way through Youtube and some articles about how these components worked and stuff, and finally made a proper circuit that looked okaiyshly neat.
- Then about the coding part, it was rather **easier** than expected. It took like 5 mins to understand these, because I'm majorly **thorough** in **C language**, and the syntax wasn't much different from C. So coding for it was a piece of cake. And with that, Project 1 was finished smoothly.

# Project 2 -Burglar alarm
- Ok now, the next thing that came up to my mind was a burglar alarm, I have been thinking about making this one, long before even I knew about Arduino, so I thought this was a good chance to make it come true.
- I used passive infrared sensor**(PIR)** to detect any motion in front of the alarm, and that would **detect only at night time**, so I sued an ambient light sensor that would detect the level of intensity of light.I pretty much had the circuit connects pretty clear in my mind, so I plugged in everything properly in breadboard. Except for one thing. I planned to **stop the buzzer alarm go off by using a pushbutton that would stop the buzzer from ringing.** But the pushbutton was so...symmetrical, like there are two ends that are supposed to be connected, and two aren't so you make a connections between these not-connected ends of pushbutton. I didn't connect the pushbutton properly so there was no current flow between the pushbuttons.
- Everything in the circuit worked properly except for this one. I used multimeters to check for current flow, voltage drop everything. I got fed up with it and then I did a little change in the code, I had initially used a while loop to monitor over the emergency stopping of the annoying buzzer. Now I had changed the while loop to another if condition and _Voila, it worked! After 3 hrs of one annoying little tiny mistake, the alarm properly works now! Happily I moved on to the next project.

# Project 3 -Smart dustbin
- Ok I had run out of original ideas, after which whatever project idea I thought, somebody had taken it already, so I was like ok, let's search through the internet for some project ideas and I found this project, **a smart dustbin**.
- Now others have used some analog monitors and some remote control access and some instruments which I was completely unaware of. But I liked the idea, a smart dustbin.
- So I took a **PIR sensor that would sense motion and open the lid** when it did, so I connected a **servo motor** to the lid. I used an **ultrasonic sensor** to measure the **level of trash** inside the dustbin, which if it exceeded a certain threshold, the annoying buzzer would go off again.
- Only this time you need to free up the trash to stop it unless and until that it would be ringing brrrrrr forever. So the circuit idea was simple and clear in my mind, executed it smoothly, and coding again wasn't that tough either, and in the end, the smart dustbin works just perfect.
