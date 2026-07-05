---
Title: "Cloudboard"
Author: "Matias Argandona AKA Goog07,Goog-hash,Goog-yaml"
Description: "An Extremely simple ESP based devboard that I usedas a learning experince for PCB design"
Created_at: "2025-05-24"
---


# May 24th, Afternoon: Starting this journal, and adding components

Started initial schematic and added entire main PCB

-Matias

![May 24th schematic screenshot](https://public.lapse-hackclub.link/timelapses/mtv7v_8XFG6k/thumbnail-mtv7v_8XFG6k.avif)

**Total time spent: 1h 4m**

# May 24th, Evening: Motive changes and extra additions

Added more components like a SPI DAC, GPIO extender, and a USB Controller. Changing this project motive to an avionics board.

-Matias

![May 24th schematic screenshot](https://public.lapse-hackclub.link/timelapses/GocF0tKfYkj8/thumbnail-GocF0tKfYkj8.avif)

**Total time spent: 50m**

# May 25th: Added coprocessor for AI engine

Added and finalized a serial connection with the AI side and low level hardware side.

-Matias

![May 25th schematic screenshot](https://public.lapse-hackclub.link/timelapses/3HEgRRwrtEbT/thumbnail-3HEgRRwrtEbT.avif)

**Total time spent: 43m**

# May 26th: Redid the entire project only to loose it all, I'm gonna cry

I redid the entire PCB design and added supporting capacitors, diodes, and the likes. When I was finishing my timelapse disaster struck, my laptop ran out of RAM and my tab crashed while saving, I lost ~3 hrs of work. Support can't do anything either. My blood is boiling as of writing this...

-Matias

![initial time recorded before issue](lapseissue1.png)
![tab crash during upload](lapseissue2.png)
![it seems the file got corrupted, this is what happens when I try to view it.](lapseissue3.png)

(unoffical)
**Total time spent: 2h 39m**

# May 26th, almost 27th, Midnight: Attempts at reimbursing lost hours

I worked for about and hour and a half just redoing more PCB work overtime to contrast the 2+ Hrs lost =(((. Still working and going strong. I better get into nexus istg.

For this session I added supporting components to the ESP32-S3 AI module, still on the fence about the motives for this project but whatever. The only thing getting me through all this work is me and my Radiohead albums against the world, I listened to Hail to the Thief at least five times today, heavy on <em>Wolf At the Door</em> By Radiohead, totally my favorite song in the album. I gotta touch up on my markdown skills for this journal lmao.

I'm looking back an realizing I kinda need to be more descriptive with these entries.

I'm tired...

Signing off at 23:55:19.

Goodnight.

-Matias

![screenshot of last night](https://public.lapse-hackclub.link/timelapses/OwKqlk_MC5PQ/thumbnail-OwKqlk_MC5PQ.avif)

**Total time spent: ~1.5hrs**

# May 27th, 11:00AM: Back at it again

Added and did more work on the AI coprocessor and crystal, I also put together the connections for the sensing board and I2C bus for the main hub, I might add a second display module, I don't know. I'm going to come back this evening add add and research a radio unit, who knows. I currently have like five hours of Radiohead listening time this month on Amazon Music and It's not slowing down, it's me and my Radiohead  albums against the world. :cry:

-Matias

![timelapse thumbnail](https://public.lapse-hackclub.link/timelapses/Z7q9jt8_0wht/thumbnail-Z7q9jt8_0wht.avif)

**Total time spent: 1h 6m**

# May 27th, 2:00PM: Sensing board redos and fixing the toast I2C bus

I fixed and replaced the original RJ12 telephone jack and added a new RJ45 to carry the I2C bus, I also set up the INT pin on the bus and did the sensor board. Yay me!

I forgot the radio board and ran out of time, I gotta run now.

-Matias

![thumbnail](https://public.lapse-hackclub.link/timelapses/-vGMhz-j6N5g/thumbnail--vGMhz-j6N5g.avif)

**Total time spent: 55 mins**

# May 24th, 5:00PM: Vision research and a lot of datasheet reading

This time, instead of working on the PCB I did some research for what I can use for AI vision, I'm beginning to think I can't... I don't know, I didn't do a lot though.

-Matias

![thumbnail](https://public.lapse-hackclub.link/timelapses/Gs-rArC55PSK/thumbnail-Gs-rArC55PSK.avif)

**Total time spent: 1hr**

# May 29th: Finished schematics

Today, I finished the schematics and yesterday I redid them again but could not track time :sad:. Today I did research on transistors, added reset, boot, and power OR circuits, I also arranged and set footprints for each component. Yay!

-Matias

![thumbnail](https://public.lapse-hackclub.link/timelapses/OgsNnIPAgg86/thumbnail-OgsNnIPAgg86.avif)

**Total time spent: 2hrs 13mins**

# May 31st: Started Schematics

Today I just added footprints for some generic components and then I started PCB floorplanning, not a lot of work done.

-Matias

![thumbnail](https://public.lapse-hackclub.link/timelapses/jtkZqAfn9zF8/thumbnail-jtkZqAfn9zF8.avif)
**Total time spent: 14min**

# June 1st: Started PCB traces and more floorplanning

Today I started traces but then decided to scrap it for more effective floorplanning of the PCB, to be fair this is my first time so I don't expect to be super good at this.

(P.S: floorplaning is the layout without traces of the PCB components)

-Matias

![thumbnail](https://public.lapse-hackclub.link/timelapses/9fUPD_tEbTua/thumbnail-9fUPD_tEbTua.avif)

# June 2nd: Almost done with PCB design

Today I continued on with PCB design and did most of the tracing and heavy lifting, I connected all components including the BME680, the MPU9250, the ESP32-S3, the AMS1117, the IO pins, the RJ45 and USB-C connectors, and the FT230X with all of the capacitors and extra components for them. I set up the board and did some research about vias, traces, and guidelines and multilayering, once finished I started the design process copying down each design from schematic to PCB, next I need to do some tweaking and finish IO connections for the PCB.

-Matias

![thumbnail](https://public.lapse-hackclub.link/timelapses/40KJBx9DT0LL/thumbnail-40KJBx9DT0LL.avif)

# June 17th: Done with Rev1

After a while I finally finished revision one for the PCB, Yay me! I have not touched this project in a while due to school, but not that school's out I can finally have time to work on this. I'm so glad that after so many setbacks I finally finished the first revision. I'm happy and hopeful for what is to come!

-Matias

No thumbnail here

# June 18th: Restarting the project, again

The original first revision was a full blow out, the traces were messy and long and the floorplanning sucked, after some review from other sources online I realized that my project was sure enough not going to work. Instead of giving up I saved the file, duped it into the archives and started a new project. I trimmed down the layers to only two and then I got to work, I stared off by making new DRC checks and now I'm learning how to make custom rules with trace width and clearance. I also make the board much much smaller and made the components much tighter spaced. The first image is the original board.
![Original board](screenshot-2026-06-19_10-19-29.png)
![New board](screenshot-2026-06-19_10-25-50.png)

# June 19th and 21st: Starting the rough draft of floorplaning so many times I lost count

Today I worked around three ish hours to restart the component layout again and again but no fear, I have hope. Thankfully enough this is a project for me to learn PCB design, the hard way. It's paying off very well considering I'm getting better with every revision and every schematic. Just look at the first board compared to now:
![OG Rev1](oldboard.png)
![New and cooler board](newboard.png)
I know that the new board still kinda sucks but I will take it. It's going well right now with the layouts.
I need to head over for vacation soon so I don't think I will be able to work on this project for a while

Time Spent: 3hrs
-Matias

# June 26th: Simple work

All I really did today was follow user online about swapping the AMS117 with another unit from TI because the AMS unit has thermal issues. The TI unit is more advanced and seems to be more up to date that the janky AMS117. That's all though.

Time spent 1hr
-Matias
![thumbnail](https://lookout.hackclub.com/api/media/871c4065-317b-4b38-9237-a6ae7b022158/thumbnail.jpg)

# June 27th: Graphics and almost nothing at all done

I did a little bit of research on ESD symbols because the datasheet for the TI LVR warns about ESD damage. I honestly did nothing here.

Time spent: 30 mins
-Matias
![tumbnail](https://lookout.hackclub.com/api/media/13df848e-80b5-4f8b-9f90-24ee8b4edf4c/thumbnail.jpg)

# June 28th: A ton of stuff with DRC, and skew correction

Today I redid the entire thing and offically lost count with the mini revisions. Who cares. I also fumbled with the auto skew settings on Kicad for a solid 30 minutes... lol. I'm learning a lot about PCB design throughout this entire project. It's teaching me a lot and I'm happy about it.

# June 29th: Same thing as yesterday

Today I learned about JLCPCB manufacturing rules and set up DRC to make sure I stay within those bounds. I did some small refinements on serial communication and also did some more with skew settings, a lot of screaming at my display was involved.

Time spent: ~5hrs
-Matias
![thumbnail](https://lookout.hackclub.com/api/media/fe4c176a-103d-46ff-ac1c-d4112bef221e/thumbnail.jpg)

# June 30th: Presentaion and cleanup

Most of my time today was centered around cleaning up the messy schematic so I could post it online for review. Then the rest of the three hours was spent on making a google slideshow as a presentation and roadmap and also making a diagram on function.

Time spent: ~3hrs
-Matias
![thumbnail](scrn2.png)

# July 1st: Creating the third major PCB revision

I refined my tactics for more efficient floorplanning and I also redid the PCB again. I near the end learned how to create a BOM and select parts. Today was long but worth it considering the major steps I made from the point that I began at. I'm seriously enjoying this project and it's fun learning so much.

Time Spent 5hrs
-Matias
![screenshot](scrn3.png)

# July 5th: Happy Fourth! Organizing files

Currently I am organizing files and tweaking issues with kicad and automatic backups. I am also starting to do more commits on a change basis instead of at the end of a workday.

-Matias

# July 5th: Updated BOM and component stripping

Currently I updated the BOM because JLCPCB was trying to rip me off with insane prices for two custom boards. Uniroyal seems to be the goat of the budget world for insane low prices.
