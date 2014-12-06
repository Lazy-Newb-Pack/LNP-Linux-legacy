Lazy-Newb-Pack-Linux V0.40.19
====================

A small package to get people started with Dwarf Fortress on linux. Please take time to check out the [Official thread](http://www.bay12forums.com/smf/index.php?topic=140966.0). There are a few help documents in the [Wiki](https://github.com/Lazy-Newb-Pack/Lazy-Newb-Pack-Linux/wiki) if you should get stuck.


#### Linux Download 

DFFD Download: [HERE](http://dffd.wimbli.com/file.php?id=8936)

Website Download [faster]: [Not yet](http://www.lazynewbpack.com/linux/#download)

#### Older Linux Downloads

V0.40.16 Linux Lazy Newb Pack can be found [Not yet](http://www.lazynewbpack.com/linux/04016/)

V0.40.15 Linux Lazy Newb Pack can be found [here](http://www.lazynewbpack.com/linux/04015/)

V0.40.14 Linux Lazy Newb Pack can be found [here](http://www.lazynewbpack.com/linux/04014/) 

V0.40.13 Linux Lazy Newb Pack can be found [here](http://www.lazynewbpack.com/linux/04013/)

 
#### Other Versions
 

Similar packages also available in windows and Mac:

Windows Version: [PeridexisErrant's Starter Pack](http://www.bay12forums.com/smf/index.php?topic=126076.0)

Mac Version: [Fricy's MacNewbie Pack](http://www.bay12forums.com/smf/index.php?topic=128960.0)


#### Package Version Notes

Added the Dec 6 updated version of [rmblr's 0.40.19 Stockpiles Settings Management](http://www.bay12forums.com/smf/index.php?topic=146213.0) plugin,
Added [mifki's Text Will Be Text](http://www.bay12forums.com/smf/index.php?topic=138754.0) dfhack plugin in the x64 version. :D 
	* multilevel distance set to 6 and on by default, 


Included Mods
-------------
* [Pidgeot's PyLNP 0.8b Lazy Newb Pack Python interface](http://www.bay12forums.com/smf/index.php?topic=140808.0)
* Utilities:
    * [DFhack Linux V0.40.19 R1 (gcc 4.5.4)](http://www.bay12forums.com/smf/index.php?topic=139553.0) Thanks lethosor!
        * [StoneSense](https://github.com/DFHack/stonesense)
    * [splintermind's Dwarf Therapist v30](https://github.com/splintermind/Dwarf-Therapist/tree/DF2014) (compiled with qt4, but also comes in [qt5](http://www.lazynewbpack.com/linux/#qt5)
    * [Soundsense r43](http://df.zweistein.cz/soundsense/) (need to run auto update on first use)
    * [qfconvert 2.04](http://www.joelpt.net/quickfort/)
    * [chromafort 2010-04-25](http://www.bay12forums.com/smf/index.php?topic=55025.0)
    * [DF Announcement Filter 1.01](http://www.bay12forums.com/smf/index.php?topic=130030.0)
    * [World Viewer for DF 40.0x](http://www.bay12forums.com/smf/index.php?topic=128932.0) (works with wine)
* Tilesets (Now using [fricy's Updated tilesets](https://github.com/fricy/DFgraphics)!)
    - [12x8] ASCII [Default]
    - [16x16] ASCII
    - [16x16] [Afro's Graphics Pack 1.33](http://dffd.wimbli.com/file.php?id=9137)
    - [16x16] [CLA v0.40.14v19](http://www.bay12forums.com/smf/index.php?topic=105376.0)
    - [32x32] [DawnFortress v0.28](http://www.bay12forums.com/smf/index.php?topic=136221.msg4992910#msg4992910)
    - [15x15] [Duerer v.0.6](http://www.bay12forums.com/smf/index.php?topic=142083.0)
    - [12x12] [Grim Fortress 1.2](http://www.bay12forums.com/smf/index.php?topic=122421.0)
    - [16x16] [Ironhand v0.40.0x](http://dffd.wimbli.com/file.php?id=8747)
    - [12x12] [Jolly Bastion](http://www.bay12forums.com/smf/index.php?topic=104261.0)
    - [16x16] [MLC ASCII Tileset for TWBT](http://www.bay12forums.com/smf/index.php?topic=128933.0)
    - [16x16] [Mayday v0.40.0x](http://goblinart.pl/vg-eng/df.php) with [Doren's additions](http://www.bay12forums.com/smf/index.php?topic=141195.0)
    - [16x16] [Obsidian  graphics pack 40.x unofficial update](http://www.bay12forums.com/smf/index.php?topic=126934.0)
    - [16x16] [Phoebus v0.40.0x](http://www.bay12forums.com/smf/index.php?topic=137096.0)
    - [16x20] [Shizzle 1.3](http://dffd.wimbli.com/file.php?id=7205)
    - [20x20] [Taffer XVI](http://www.bay12forums.com/smf/index.php?topic=107924.0)
    - [24x24] [Vherid v7](http://www.bay12forums.com/smf/index.php?topic=89856.0)

 also includes
 * [Captian Duck's DF2014 Embark Profile V3](http://www.reddit.com/r/dwarffortress/comments/2bzrqg/dfvidtuts2014_embark_profile_beta_testing/)
 * [Dwarf Therapist user Guide by ResMar](http://dffd.wimbli.com/file.php?id=7889)
 * [Community Quickfort blueprints]()




Release notes for 0.40.19 (November 26, 2014):
-------------


Here is another release for November, mostly related to livestock.

New stuff

	* Added gelding and associated profession/skill/etc.

Other bug fixes/tweaks

	* Showed animal gender symbols in a few more places
	* Got rid of mating-at-a-distance
	* Added drink tab to kitchen screen
	* Moved all remaining announcements to announcements.txt
	* Added ability add/remove bp flags to set bp group
	* Tweaked crowded pasture anger counter
	* Stopped liaison from inserting own gender into position change news
	* Added more work-arounds for compiler issue (fixing broken vault weapons and other problems)

******************************************************

Release notes for 0.40.18 (November 20, 2014):
-------------

The flag changes brought forth a compiler issue on Windows (breaking smelting, for example).  Hopefully it'll work better now.

******************************************************

Release notes for 0.40.17 (November 19, 2014):
-------------

Here is another friendly little release.

Major bug fixes

	* Fixed collapsing shrines
	* Fixed army crash/bad behavior near the right/lower edge of the map
	* Fixed a conversation crash related to uncivilized people/creatures trying to sell something in the market
	* Made people only jump into actual conflicts, rather than animal encounters and training events

Other bug fixes/tweaks

	* Made stress levels drop faster the longer no stressors are applied
	* Made gathering plants from the ground add to herbalist skill properly again
	* Made plants that grow in winter-spring plantable at all proper times (Quietust)
	* Optimized flag checks for non-windows OSs (ag)
	* Fixed problem deleting stockpile links in the case that stockpile had multiple give/take settings
	* Fixed blinking behavior for stockpiles/zones vs. ramps/stairs
	* Fixed blinking behavior for designations vs. anything obscuring them
	* Fixed double untranslated name in thoughts screen
	* Fixed elf diplomacy typo

-------------

#   Dependencies

   Install required packages

 For Debian / Ubuntu
```
sudo apt-get install default-jre libsdl1.2debian:i386 libsdl-image1.2:i386 libsdl-ttf2.0-0:i386 libglu1-mesa:i386 libgtk2.0-0:i386 libopenal1:i386 libjpeg62:i386 git mercurial wget coreutils tar unzip unrar make g++ gcc patch xterm sed python bzip2 qtchooser qtbase5-dev qtbase5-dev-tools qtscript5-dev qt5-qmake libqt5script5 libqt5scripttools5 libqxt-core0 libqxt-gui0
```


  System Requirements
-------------

* A Java runtime environment for the LNP GUI.
* SDL 1.2, 32-bit
* LibGLU 1, 32-bit
* LibGTK 2.0, 32-bit
* OpenAL 1.2, 32-bit
* LibJPEG 6.2, 32-bit
* Git
* Mercurial (hg)
* Qt5 Development Libraries including qmake
* Python 2.x (for Quickfort)
* The following fairly standard Linux utilities:
  - wget
  - sha1sum
  - sed
  - tar
  - unzip
  - unrar
  - make
  - g++
  - gcc
  - xterm

 Usage
=====

```
Usage: ./startlnp
```


Tested On
=========
* Ubuntu 14.04 "Trusty Tahr"      fresh install.
 

Common Issues
=============
See [the WIKI](https://github.com/BeauBouchard/DF-Lazy-Newb-Pack/wiki).

Credits & Special Thanks
=============

 * [@andrewd18](https://github.com/andrewd18/) Andrew Dorney made the awesome linux LNP isntaller script
 * [@amfournda](https://github.com/amfournda/) Created a great gentoo fix script included in the pack
 * [@Captain Duck](https://www.youtube.com/playlist?list=PL06686270DA5FF439) 
 * [@Daveralph](https://github.com/daveralph1234/LazyNewbPack/) continued working on LNP after Dricus 
 * [@Dricus](https://github.com/Dricus)   Dirk Groot is the creator of the cross platform LNP port
 * [@Dwimenor](https://github.com/Dwimenor/) Created a workaround for LNP, as well as providing linux support
 * [@fricy](https://github.com/fricy/) Maintains the MacNewbie pack Reborn as well as supporting essential gaphic repo
 * [@joelpt](http://www.joelpt.net/quickfort/) Joel Thornton Created Quickfort 2.x
 * [@lethosor](https://github.com/lethosor) Works on DFhack, DFwiki, and maintainer of the LNP
 * [@LucasUP](https://github.com/LucasUP/) Lucas Paquette made the orginal windows LNP 
 * [@splintermind](https://github.com/splintermind/) Josh, part time wizard works dilligently on Dwarf Therapist
 * [@PeridexisErrant](http://www.bay12forums.com/smf/index.php?topic=126076.0)
 * [@Pidgeot](https://bitbucket.org/Pidgeot/python-lnp/) Michael is a Founding developer of PyLNP
 * [@runrobotrun](http://www.bay12forums.com/smf/index.php?topic=55025.0) Created Chromafort
 * [@Zweistein](http://zweistein.cz/) Created Soundsense



If I forgot people, please let me know and I'll include them in the list.
