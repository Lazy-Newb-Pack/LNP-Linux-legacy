Lazy-Newb-Pack-Linux V0.40.15
====================

A small package to get people started with Dwarf Fortress on linux. Please take time to check out the [Official thread](http://www.bay12forums.com/smf/index.php?topic=140966.0). There are a few help documents in the [Wiki](https://github.com/Lazy-Newb-Pack/Lazy-Newb-Pack-Linux/wiki) if you should get stuck.


#### Linux Download 


DFFD Download: [HERE](http://dffd.wimbli.com/file.php?id=8949)

Website Download [faster]: [HERE](http://www.lazynewbpack.com/linux/04015/)

#### Older Linux Downloads

V0.40.14 Linux Lazy Newb Pack can be found [here](http://www.lazynewbpack.com/linux/04014/) 

V0.40.13 Linux Lazy Newb Pack can be found [here](http://www.lazynewbpack.com/linux/04013/)

 

#### Other Versions
 

Similar packages also available in windows and Mac:

Windows Version: [PeridexisErrant's Starter Pack](http://www.bay12forums.com/smf/index.php?topic=126076.0)

Mac Version: [Fricy's MacNewbie Pack](http://www.bay12forums.com/smf/index.php?topic=128960.0)


Included Mods
-------------
* [Pidgeot's PyLNP 0.7.1 Lazy Newb Pack Python interface](http://www.bay12forums.com/smf/index.php?topic=140808.0)
* Utilities:
    * [DFhack Linux V0.40.15 R1 (gcc 4.5.4)](http://www.bay12forums.com/smf/index.php?topic=139553.0)
    * [splintermind's Dwarf Therapist v28](https://github.com/splintermind/Dwarf-Therapist/tree/DF2014) (by default qt5, but also comes in [qt4](http://www.lazynewbpack.com/linux/#qt4))
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




DF 40.15 Release notes (November 5, 2014):
-------------

Here's another release with bug fixes and small changes to brighten your day.
—Toady One, November 5, 2014

*Major bug fixes:*

    * Made growing trees update cave-in and light information properly
    * Handled stress counter timing properly in adv mode
    * Stopped nerve check from bypassing broken parts between thought center and body roots
    * Stopped part from being pulped if inner nervous tissue is not detached
    * Made pulped parts bleed properly
    * Stopped crash from trying to place unit in proper connected component of crowded retired fort
    * Fixed reversed inside/outside check for outdoor refuse hauling

*Other bug fixes/tweaks:*

    * Animals that can escape from cages no longer brought by traders
    * Made reactions try to guess how their containers will be filled to stop problems with brewing large stacks etc.
    * Small coin stacks can no longer be stuffed into non-containers
    * Small coin stacks no longer pass through opponents
    * Stopped tantrum dwarves from checking burrows for fistfights
    * Changed tantrum action frequency
    * Being in an owned site makes bogeyman not an issue
    * Made ballista arrow heads and ballista arrows have edges
    * Added ability to trade everything in the depot from either column
    * Made column widths even in trade view and abbreviated strings differently
    * Added select visible and select category to bring-to-depot menu
    * Added totems to crafts tab of bring-to-depot screen
    * Added a few categories to the kitchen menu
    * Alphabetized stone and kitchen menus
    * Added magma-safe indicator to stone menu
    * Made encrust jobs respect furniture tools
    * Cannot go into specific encrust menus if selected gem not available for encrust
    * Dead dwarves removed from burrow count
    * Made toggle button update properly when moving unit labor view to non-laborer
    * Fixed a problem causing the right edge of the embark world map to disappear, including the cursor
    * Fixed location of cursor in minimap for resized windows
    * Made DOES_NOT_EXIST exclude creatures from certain lists properly
    * Stopped stress reactions from being applied to unintelligent critters
    * Stopped stress reactions of hidden creatures from being announced
    * Fixed many typos (Gorobay)
    * Updated description for pulping so it doesn't say "bruised" etc.
    * Fixed broken artifact thought text
    * Stopped immortality goal from having a broken display in thoughts
    * Properly recognized multiple embark minecarts of the same material
    * Slowed down tantrum/mood/etc. indicators
    * Stopped zombies from interrupting your sleep to ask if they can help you with something
    * Increased default embark points to compensate for more default equipment (stepladder etc.)
    * Allowed deletion of first uniform
    * Stopped crafts brought by traders from satisfying craft mandates
    * Made weather init option clear up weather properly instead of just turning off the global simulation



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
 * [@lethosor]() Works on DFhack, DFwiki, and maintainer of the LNP
 * [@LucasUP](https://github.com/LucasUP/) Lucas Paquette made the orginal windows LNP 
 * [@splintermind](https://github.com/splintermind/) Josh, part time wizard works dilligently on Dwarf Therapist
 * [@PeridexisErrant](http://www.bay12forums.com/smf/index.php?topic=126076.0)
 * [@Pidgeot](https://bitbucket.org/Pidgeot/python-lnp/) Michael is a Founding developer of PyLNP
 * [@runrobotrun](http://www.bay12forums.com/smf/index.php?topic=55025.0) Created Chromafort
 * [@Zweistein](http://zweistein.cz/) Created Soundsense



If I forgot people, please let me know and I'll include them in the list.
