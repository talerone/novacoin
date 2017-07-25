#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/taler.ico

convert ../../src/qt/res/icons/taler-16.png ../../src/qt/res/icons/taler-32.png ../../src/qt/res/icons/taler-48.png ${ICON_DST}
