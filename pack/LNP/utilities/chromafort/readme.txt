UPDATE 4/25/10
 -lots of UI improvements
 -preview added when selected image, and when converting colors
 -automatic '#' border option added
 -conversion progress bar added (it will no longer appear to have crashed when converting larger images)

note: I have had a few crashes when trying to convert very large (200 or so pixels high and wide) images

ChromaFort allows the conversion of 24-bit bitmap images (most .bmps) into comma delimited text files (.csv) for use with Quickfort.

This should greatly speed up the process of macroing elaborate designations with Quickfort, and allow users to visualize better what the end result will be.

If you are unfamiliar with Quickfort, learn the basics of that first. There are things you need to know about QF before you can begin to use CF properly.

Instructions

	map out what you want the csv to look like in any kind of simple image-editing software like MS Paint

	use any colors you want, but distinct should be distinguishable from one another (the goal is a blueprint that is easy to read)

	save the image as a 24-bit bitmap (.bmp)

	the same kind of common-sense applies here as it does in Quickfort; generally you don't want an enormous image with tons of distinct colors

	run Chromafort, and open your image; if the jar file does not open, you may need to update java
		note: the image must have a .bmp suffix

	a list will appear of all the distinct colors your image contains

	type in (into the box corresponding to each color) the values you want each pixel of that color to be converted to
		(such as "d", "Cu", "#", or a combination of commands without parentheses)

	you may choose to include a header (such as "#dig level 1", "#build") by checking the appropriate box; this will be the first cell of your csv file

	you can also choose to have a border of '#' cells around your blueprint, which could presumably speed up QF's macroing

	remember, each pixel will correspond to a string separated by commas, or one "cell" in programs like Excel, so anything goes as long as Quickfort can recognize it

	click the convert button at the bottom of the list and specify a location to save your file

	if you don't include the ".csv" suffix, it will be added automatically

	Your .csv file has been created, and can now be opened with Quickfort.

Happy forting!