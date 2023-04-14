## What to expect from this presentation?
And what not.

These slides may contain incorrect information! I did not check directly for mistakes! Also, some anectodes may be severely simplified or just plain wrong! Keep this in mind!<!-- .element: style="font-size:18px;border:1px solid red;border-radius:10px" -->
---
## These slides will:
 - Document information around our laboratory
 - Document our team's approach to them
 - Try to make the required knowlede more accessible
---
## These slides will ***not***:
 - Provide a complete solution to the tasks whatsoever
 - Summarize the entire lecture, nor try to do so
 - Contain all of the relevant information needed to complete the tasks

**These might not explain stuff well. I am not a professional.**

---


## General stuff relating to the tasks
---
 - Starting off, you won't know much about the topic and thats fine
 - Grasp the basics of the lecture and the rest is achieved with the provided materials and ***logic***

---

## Series 1
Cycling a bit through r7 and syncing the rgb led to it

---

## Before you start:
 - Binary and hex basics (TGI)
 - The basics of our registers
 - WTF are memory addresses and what to they do?
 - The workflow
 - Where to find the required manuals and documentations

The following slides contain tiny reminders and anecdotes of these; skip if unnecessary<!-- .element: style="font-size:12px" -->
---
## Binary and hex stuff
[Binary eplained at khanacademy](https://www.khanacademy.org/computing/computers-and-internet/xcae6f4a7ff015e7d:digital-information/xcae6f4a7ff015e7d:binary-numbers/a/bits-and-binary)
```
0x1        ==        1
0xF        ==        15
0xFF       ==        255
0xFFF      ==        4095
0x1000     ==        4096
```
[Hex explained](https://www.khanacademy.org/computing/computers-and-internet/xcae6f4a7ff015e7d:digital-information/xcae6f4a7ff015e7d:hexadecimal-numbers/a/hexadecimal-numbers)
---
## How data is organized
<style>.box {
	border: 1px solid white;
}

.list {
	width: 45%;

}

.horizontal {
	display:flex;
	justify-content: space-between;
}
</style>
<div class="horizontal">
	<div class="list">
		<span style="font-size:32px">Data (lets say Bytes)</span>
		<div class="box">0</div>
		<div class="box">255</div>
		<div class="box">42</div>
		...
		<div class="box">123</div>
	</div>
	<div class="list">
		<span style="font-size:32px">Address (here dec. often hex.)</span>
		<div class="box">0</div>
		<div class="box">1</div>
		<div class="box">2</div>
		...
		<div class="box">4,294,967,295</div
	</div>
</div>
---
### Hardware Mapping
The important point for us is, that specific areas in memory have designated meaning.  
As an example, the data stored behind address 0x12345678 might always be used by the processor to determine the brightness of the built in LED.  
So, writing values to it has a direct effect on the system.  
That is how you get stuff done on this level:  
By writing the correct value to the correct place!
---
## ***OUR*** assembly workflow
1. Break the task down to a pseudocode like level
2. Find out where in memory the current action takes place (datasheet)
3. Check what data you need to change in what way (datasheet)
4. Actually code it. Load the data, change it and store it again(arm thumb docs)

Only step 4 is actually writing code. The rest is digging through datasheets and documentation.<!-- .element: style="margin-top:50px" -->y
---
## Genereal Purpose Registers
How to actually work with data

You have a few registers where you can freely do stuff (mostly r0 ... r7)  
They have 32 bits of data each available  
Working with specific commands on them might set flags. These are internally stored in the program state register automatically.
---
## Sample code
<div style="font-size:30px">
	LDR r0 =<i>some .equ constant</i>	Loads the stored constant into r0<br>
	LDR r1, [r0] 				Interprets r0 as an address and loads the data behind it into r1<br>
	MOV r3, #<i>some small, I think 16 bit, .equ constant</i> 	I think same as r1 but for smaller values...<br>
	ORR r1, r1, r3			Logical or between r1 and r3 and store into r1
	STR r1, [r0]			Store the content of r1 to the adress that is stored in r0<br><br>
</div>
### ALL OF THIS CAN BE FOUND ON THE CHEATSHEET AND IN THE DOCS - BUT BETTER
---
## Manuals and documentation
As you might have noticed by now, all datasheets and documentation is provided to us in the moodle task.  
For the sake of completeness, here they are again though:  
[CPU Datasheet](resources/proc-datasheet.pdf)  
[Board Datasheet](resources/board-datasheet.pdf)  
[Assembly Documentation](https://developer.arm.com/documentation/dui0473/m/arm-and-thumb-instructions/arm-and-thumb-instruction-summary?lang=en)
						
---

## Approaching the task
---
## Get the led working by itself
 - Onboard LED is connected to GPIO Pins so check out how to set them up properly (Datasheet, mostly chapter 10)
 - Check the board datasheet to see what pin they are connected to exactly
 - Try to just turn on the LED in a specific color
---
## Try to get the button to work
 - The button is also hooked up the GPIO Pins but needs some extra work compared to the LED. Set it up.
 - The datasheet specifies where in memory you can see if a button is pressed or not. Find out where.
 - With everything setup, try to turn on the LED only when the button is pressed
---
## Build a timer
 - Try to build a 500ms timer. You can just count up in some register every cycle and approximate when 500ms are reached.
 - Then, do something observable, like toggle the LED-Color when the counter is reached and reset it
---
## Organize into branches with subroutines
 - Now, instead of just switching the LED, you can try to branch of into a subroutine to make your code more readable.
 - Idead would be to make subroutines for the timer, the action when it is reached, the resetting of it and much more...
---
## Adding shifting
You should now be able to read the button press, use LEDs and all that organized  
The shifting part is relatively easy compared to the previous stuff, as there are direct Instructions for that.  
Try to code it so, that when your timer reaches its count, you also shift left in r7.  
But when the button is pressed, you instead branch of before and shift to the right.  
You could also directly add the matching LED colors. Just remember to turn off the unneeded one aswell!<!-- .element: style="font-size:28px" -->y
---
## But theres more!
You need to handle the shifting outside of the register
						
Just check after every shift if there has be an "overflow" / "underflow".  
Ideally you have 2 separare branches, one for right shift one for left.  
So you check in each for the outside shift and can react accordingly!
---
## Thats it
If everything went according to plan you should be done now! :)
