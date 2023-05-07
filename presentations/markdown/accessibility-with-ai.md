<!-- .slide: data-background-image="resources/screen-reader.jpg" -->
Note:
Screen Readers or other equipment to help the visually impaired access the modern web
come in all shapes and forms. How these devices or even programs know what information
to display and in what format also depends on the technology used.
Some technology just amplifies and enlarges what can already be seen for people
who just have a hard time reading small text or have bad but at least some vision left.
Another popular technique is to access the source-code of the underlying website
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
so I wasnt able to build a tech-demo but the concept stands nevertheless. The idea is to
have an AI tool, that gets the markup of a website, detects what images on the site
contain relevant data and then transcribe these images with fitting alt texts if they
are missing.

---

<!-- .slide: data-background-image="resources/toolchain.jpg" -->
Note:
If my tool is built on such general terms, it would be able to be used in 2 main ways:
On the one hand, developers themselves would be able to incorporate these functions
into their toolchain so that they dont have to write any alt texts anymore, because
my program could autogenerate them for them. One surely would have to skim over them
from time to time to make sure they are actually accurate, because AI tools sometimes can be unreliable, but I think that even without that it just adds a beneficial baseline.

---

<!-- .slide: data-background-image="resources/AIEye.jpg" -->
Note:
On the other hand, maybe even the more obvious application would be to integrate the
tool into existing screen readers, so that people who use one dont have to be at the
mercy of lazy developers. Instead of just not knowing what an image might contain,
the AI can try to provide a description. As stated above this might not be 100% accurate
all the time, but the reader could be able to find that out given the rest of the
context, or just try to regenerate a description.

---

<img src="resources/loading-spinner.png" width=60%></img>
Note:
In my opinion, the difficult part of this project wouldnt even be generating a description for images, but much more so to classify which images on any given site contain relevant
data worth transcribing and which do not. That is because there are many instances,
where an image is used for stuff like loading animations or other things. In that case,
the alternative text is left out consciously, knowing that it wont provide any value
to the end-user.

---

<!-- .slide: data-background-image="resources/gpt4-example.png" -->
Note:
I reckon this problem might also be a feasible place for another AI to classify these
sorts of images. Advanced Language Models like GPT-4 have functionality to take a
combination of pictures and text content as input. That way, one could prompt it to
classify whether a given picture on a website is worth transcribing and only then
actually do so.

---

<!-- .slide: data-background-image="resources/tech-helping.jpg" -->
Note:
I strongly believe that modern technology will be able to help the disabled in many kinds
of ways. From the rapidly evolving field of AI that will be able to assist people who lack
senses or have deficits in that particular field, to modern robotics, prosthetics and so on
that can assist people who have physical disabilities. And who knows where this might lead us?
Maybe some day everyone will want to use AI-powered screen readers because they are just so
good at describing and summarizing what is happening that you dont even wanna do it yourself?
Only the future can tell.

---

## Information Sources
 - [W3C Accessibility](https://www.w3.org/standards/webdesign/accessibility)
 - [W3C Wikipedia](https://en.wikipedia.org/wiki/World_Wide_Web_Consortium)
 - [Accessibility Stats](https://webaim.org/projects/million/)
Note:
Thanks for listening to my presentation. These are my information sources.

---
## Image Sources
 - [Screen Reader](https://brayve.net/wp-content/uploads/2019/12/11748/pro-tip-making-images-accessible-to-screen-readers-doesnt-need-to-be-hard-1536x864.jpg)
 - [W3C Accessibility](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Ftse4.mm.bing.net%2Fth%3Fid%3DOIP.yRBRZd0VH84pl1MHmkEfPQHaEL%26pid%3DApi&f=1&ipt=27a6ec1f005450d853cdb0067091964dd8217572b8be9ea6b30aef19988342b5&ipo=images)
 - [Pulp Fiction](https://media.tenor.com/EJbGrG_eBsYAAAAd/pulp-fiction-briefcase.gif)
 - [Toolchain](https://www.siriuscom.com/wp-content/uploads/2017/11/DevOps-Toolchain.jpg)
 - [AI Eye](https://cdn.sanity.io/images/0vv8moc6/ophtalmology/7ec6aae6d99a2eed23af03b8c0cb34428c354818-5669x3780.jpg?auto=format)
 - [Loading Spinner](https://www.kindpng.com/picc/m/392-3926418_loading-spinner-loading-icon-png-transparent-png-download.png)
 - [GPT4-Example](https://openai.com/research/gpt-4)
 - [AI helping](https://smartclick.ai/wp-content/uploads/2021/02/AI-Improves-Daily-Life-1200x534.jpg)

Note:
And these are my image sources. Thanks for your attention.
