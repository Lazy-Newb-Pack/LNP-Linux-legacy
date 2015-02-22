#!/usr/bin/python

import pygame
import sys

scale = 1
bytesperpixel = 4

if (len(sys.argv)<2):
   print('usage: ConvertImageToMacro myimage')
   sys.exit(-1)
   
imagesrf = pygame.image.load(sys.argv[1])

imagebuf = pygame.image.tostring(imagesrf, 'RGBA')

(w,h) = (imagesrf.get_width(),imagesrf.get_height())

#print((w,h))

#print(len(imagebuf))

print('#dig,')

for j in range(0,h/scale):
   for i in range(0,w/scale):
      pixidx = (int((j+0.5)*scale)*w+int((i+0.5)*scale))*bytesperpixel+1
      if imagebuf[pixidx] == '\xc0' or imagebuf[pixidx] == 'x' or imagebuf[pixidx] == '\x80' or imagebuf[pixidx] == '\xFF':
         print 'd,',
      elif imagebuf[pixidx] == '\x00' and imagebuf[pixidx-1] == '\xff':
         print 'j,',
      elif imagebuf[pixidx] == '\x00' or imagebuf[pixidx] == '\xff' or imagebuf[pixidx] == '\x80':
         print ',',
      else:
         print repr(imagebuf[pixidx]),
         print ',',
      #print((imagebuf[pixidx],imagebuf[pixidx+1],imagebuf[pixidx+2])),
   print('')
      