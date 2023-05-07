<!-- .slide: data-background-image="resources/screen-reader.jpg" -->
Note:
Screen Readers or other equipment to help the visually impaired access the modern web
come in all shapes and forms. How these devices or even programs know what information
to display and in what format also depends on the technology used.
A popular technique is to access the source-code of the underlying website
directly and to extract the necessary information from there.

---

<!-- .slide: data-background-image="resources/w3accessibility.png" -->
Note:
To achieve this in a satisfying manner, the W3C (World Wide Web Consortium) has made an
effort to provide developers with possibilities to give context in the development of a
website that these readers can use. Examples include alternative descriptions for images,
making a website accessible without the need for a mouse, transcripts for audio or just
using the given language tags like headings, paragraphs etc to provide context.

---

<table style="font-size:26px;">
	<tr>
		<th>WCAG Failure Type</th>
		<th>% of home pages in 2023</th>
		<th>% of home pages in 2022</th>
		<th>% of home pages in 2021</th>
		<th>% of home pages in 2020</th>
		<th>% of home pages in 2019</th>
	</tr>
	<tr>
		<td>Low contrast text</td>
		<td>83.6%</td>
		<td>83.9%</td>
		<td>86.4%</td>
		<td>86.3%</td>
		<td>85.3%</td>
	</tr>
	<tr>
		<td>Missing alternative text for images</td>
		<td>58.2%</td>
		<td>55.4%</td>
		<td>60.6%</td>
		<td>66.0%</td>
		<td>68.0%</td>
	</tr>
	<tr>
		<td>Empty links</td>
		<td>50.1%</td>
		<td>49.7%</td>
		<td>51.3%</td>
		<td>59.9%</td>
		<td>58.1%</td>	
	</tr>
	<tr>
		<td>Missing form input labels</td>
		<td>45.9%</td>
		<td>46.1%</td>
		<td>54.4%</td>
		<td>53.8%</td>
		<td>52.8%</td>
	</tr>
	<tr>
		<td>Empty buttons</td>
		<td>27.5%</td>
		<td>27.2%</td>
		<td>26.9%</td>
		<td>28.7%</td>
		<td>25.0%</td>
	</tr>
	<tr>
		<td>Missing document language</td>
		<td>18.6%</td>
		<td>22.3%</td>
		<td>28.9%</td>
		<td>28.0%</td>
		<td>33.1%</td>
	</tr>
</table>
<aside>Data taken from the webaim project</aside>
Note:
Although we as developers already have access to all these tools and possbilities
to make websites accessible, the data sourrounding the reality of it all is scaring:
The webaim organization reported, that a study from the beginning of this year showed,
that 96.3% of all scanned homepages contained violations of the established standards.
I compiled some of the collected data and put them on display here, so you can have a
look yourself (Shortly describe some of the data in the table).

---

<img src="resources/business.jpg" width=40%></img>
<img src="resources/business.jpg" width=40% alt="A business meeting"></img>
<br>
<span style="width:40%;display:inline-block;">No alt text</span><span style="width:40%;display:inline-block;">Has alt text</span>
Note:
And I dont want to defend all the developers refusing to implement these standards,
forgetting about them or just not knowing about them. In fact, I actually caught myself just plainly
ignoring them for my own web-projects, because it just doesnt make a direct difference to us as
normal users except for some other benefits I wont touch upon in this presentation. And because my
presentation is actually a website, this slide is short demo of that: These are 2 html images, 1 has
alt text and one does not. Without me specifying which is which you couldnt just by looking.

---

<!-- .slide: data-background-image="resources/pulp-fiction-briefcase.gif" -->
Note:
This is where my project-idea comes in. I sadly was ill over the course of the last week,
so I wasnt able to build a tech-demo but the idea stands nevertheless. 

---

<!-- .slide: data-background-image="resources/business.jpg" -->

---

<!-- .slide: data-background-image="resources/business.jpg" -->

---

<!-- .slide: data-background-image="resources/business.jpg" -->

---

<!-- .slide: data-background-image="resources/business.jpg" -->

---

<!-- .slide: data-background-image="resources/business.jpg" -->

---

## Information Sources
 - [W3C Accessibility](https://www.w3.org/standards/webdesign/accessibility)
 - [W3C Wikipedia](https://en.wikipedia.org/wiki/World_Wide_Web_Consortium)
 - [Accessibility Stats](https://webaim.org/projects/million/)

---
## Image Sources
 - [Screen Reader](https://brayve.net/wp-content/uploads/2019/12/11748/pro-tip-making-images-accessible-to-screen-readers-doesnt-need-to-be-hard-1536x864.jpg)
 - 
